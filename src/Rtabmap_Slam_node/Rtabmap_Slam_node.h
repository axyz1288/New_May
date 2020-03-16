#include <iostream>
#include <thread>
#include <ros/ros.h>
#include <cmath>
#include <vector>
#include "../Robot/Robot.h"

// ROS Default msg
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/PoseWithCovarianceStamped.h>

struct msg_pose_info
{
    double pose_x;
    double pose_y;
    double pose_z;
    double rotate_x;
    double rotate_y;
    double rotate_z;
    double rotate_w;
};

class Rtabmap_Slam_Node
{
    ros::NodeHandle nh;
    ros::Publisher pub_GoalPose;
    ros::Publisher pub_fakecmd;
    ros::Subscriber sub_cmdvel;
    ros::Subscriber sub_NowPose;
    ros::Subscriber sub_GoalPose;

public:
    Rtabmap_Slam_Node();
    ~Rtabmap_Slam_Node();

    void sub_cmd_vel();
    void sub_now_pose();
    void pub_set_GoalPose_function();
    
    void set_action(const geometry_msgs::Twist &msg_cmd_vel);
    void set_NowPose(const geometry_msgs::PoseWithCovarianceStamped &msg);
    void set_GoalPose(const double px, const double py, const double pz, const double ox, const double oy, const double oz, const double ow);
    void Navigation();
    void pub_fakecmdvel_function();

    geometry_msgs::Twist msg_cmd_vel;
    int flag_pub_goal = 0;
    double x_limit = 0.05;
    double y_limit = 0.05;
    double oz_limit = 0.05;
    double error_x;
    double error_y;
    double error_oz;

    double cmd_vel_x;
    double cmd_vel_y;
    double cmd_vel_oz;
    msg_pose_info NowPose;
    std::thread *sub_cmd_vel_thread;
    std::thread *sub_now_pose_thread;
    int action;

private:
    msg_pose_info GoalPose;
    geometry_msgs::PoseStamped set_GoalPose_msg;
    geometry_msgs::Twist fake_cmd_vel;
};
