#include "Rtabmap_Slam_node.h"

Rtabmap_Slam_Node::Rtabmap_Slam_Node()
{
  pub_GoalPose = nh.advertise<geometry_msgs::PoseStamped>("/move_base_simple/goal", 100);
  pub_fakecmd = nh.advertise<geometry_msgs::Twist>("/cmd_vel", 100);
  sub_cmd_vel_thread = new thread(&Rtabmap_Slam_Node::sub_cmd_vel, this);
  sub_now_pose_thread = new thread(&Rtabmap_Slam_Node::sub_now_pose, this);
}

Rtabmap_Slam_Node::~Rtabmap_Slam_Node()
{
  sub_cmd_vel_thread->join();
  sub_now_pose_thread->join();
}

void Rtabmap_Slam_Node::sub_cmd_vel() //subscribe cmd_vel topic
{
  ros::Rate r(1000);
  sub_cmdvel = nh.subscribe("/cmd_vel", 1, &Rtabmap_Slam_Node::set_action, this);
  while (ros::ok())
  {
    ros::spinOnce();
    r.sleep();
  }
}

void Rtabmap_Slam_Node::sub_now_pose() //subscribe now_pose topic
{
  ros::Rate r(1000);
  sub_NowPose = nh.subscribe("/rtabmap/localization_pose", 1, &Rtabmap_Slam_Node::set_NowPose, this);
  while (ros::ok())
  {
    ros::spinOnce();
    r.sleep();
  }
}

void Rtabmap_Slam_Node::set_NowPose(const geometry_msgs::PoseWithCovarianceStamped &msg) //save nowpose data
{
  this->NowPose.pose_x = msg.pose.pose.position.x;
  this->NowPose.pose_y = msg.pose.pose.position.y;
  this->NowPose.pose_z = msg.pose.pose.position.z;
  this->NowPose.rotate_x = msg.pose.pose.orientation.x;
  this->NowPose.rotate_y = msg.pose.pose.orientation.y;
  this->NowPose.rotate_z = msg.pose.pose.orientation.z;
  this->NowPose.rotate_w = msg.pose.pose.orientation.w;
}

void Rtabmap_Slam_Node::set_GoalPose(const double px, const double py, const double pz, const double ox, const double oy, const double oz, const double ow)
{
  this->GoalPose.pose_x = px;
  this->GoalPose.pose_y = py;
  this->GoalPose.pose_z = pz;
  this->GoalPose.rotate_x = ox;
  this->GoalPose.rotate_y = oy;
  this->GoalPose.rotate_z = oz;
  this->GoalPose.rotate_w = ow;
  this->flag_pub_goal = 0;
}

void Rtabmap_Slam_Node::pub_set_GoalPose_function()
{

  while ((ros::ok()) && (flag_pub_goal < 1))
  {
    ros::Rate pub(1000);
    this->set_GoalPose_msg.header.frame_id = "map";
    this->set_GoalPose_msg.header.stamp = ros::Time::now();
    this->set_GoalPose_msg.pose.position.x = this->GoalPose.pose_x;
    this->set_GoalPose_msg.pose.position.y = this->GoalPose.pose_y;
    this->set_GoalPose_msg.pose.position.z = this->GoalPose.pose_z;
    this->set_GoalPose_msg.pose.orientation.x = this->GoalPose.rotate_x;
    this->set_GoalPose_msg.pose.orientation.y = this->GoalPose.rotate_y;
    this->set_GoalPose_msg.pose.orientation.z = this->GoalPose.rotate_z;
    this->set_GoalPose_msg.pose.orientation.w = this->GoalPose.rotate_w;

    pub_GoalPose.publish(set_GoalPose_msg);
    flag_pub_goal++;
    ros::spinOnce();
    pub.sleep();
  }
  this->flag_pub_goal = 0;
}

void Rtabmap_Slam_Node::set_action(const geometry_msgs::Twist &msg_cmd_vel)
{
  cmd_vel_x = msg_cmd_vel.linear.x;   //unit:m/s
  cmd_vel_y = msg_cmd_vel.linear.y;   //unit:m/s
  cmd_vel_oz = msg_cmd_vel.angular.z; //unit:rad/s

  // error_x = abs(GoalPose.pose_x - NowPose.pose_x);
  // error_y = abs(GoalPose.pose_y - NowPose.pose_y);
  // error_oz = abs(GoalPose.rotate_z - NowPose.rotate_z) * Rad2Angle;
  error_x = 1;
  error_y = 1;
  error_oz = 5;

  while (1)
  {
    while (error_x > 0.1 || error_y > 0.1 || error_oz > 5.0)
    {
      if (cmd_vel_x < 0)
        action = 1;
      else if (cmd_vel_x > 0)
        action = 2;
      else if (cmd_vel_y < 0)
        action = 3;
      else if (cmd_vel_y > 0)
        action = 4;
      else if (cmd_vel_oz < 0)
        action = 5;
      else if (cmd_vel_oz > 0)
        action = 6;
      if (error_x < 0.1 && error_y < 0.1 && error_oz < 5.0)
        action = 7;
    }
  }
}

void Rtabmap_Slam_Node::Navigation()
{
  switch (action)
  {
  case 1:
    std::cout << 1 << endl;
    CMobilePlatform->MoveBackward(error_x, 500);
    break;
  case 2:
    std::cout << 2 << endl;
    //CMobilePlatform->MoveForward(error_x, 500);
    break;
  case 3:
    std::cout << 3 << endl;
    CMobilePlatform->MoveLeft(error_y, 500);
    break;
  case 4:
    std::cout << 4 << endl;
    CMobilePlatform->MoveRight(error_y, 500);
    break;
  case 5:
    CMobilePlatform->SelfTurn(-error_oz, 500);
    break;
  case 6:
    CMobilePlatform->SelfTurn(error_oz, 500);
    break;
  case 7:
    CMobilePlatform->Stop();
    break;
  }
  if (error_x > 0.1 || error_y > 0.1 || error_oz < 5.0)
    Navigation();
}

void Rtabmap_Slam_Node::pub_fakecmdvel_function()
{

  while ((ros::ok()) && (flag_pub_goal < 1))
  {
    ros::Rate pub(1000);
    this->fake_cmd_vel.linear.x = 0.5;
    this->fake_cmd_vel.linear.y = 0.5;
    this->fake_cmd_vel.linear.z = 0.5;
    this->fake_cmd_vel.angular.x = 0.0;
    this->fake_cmd_vel.angular.y = 0.0;
    this->fake_cmd_vel.angular.z = 0.0;
    pub_fakecmd.publish(fake_cmd_vel);
    ros::spinOnce();
    pub.sleep();
    flag_pub_goal++;
  }
  this->flag_pub_goal = 0;
}