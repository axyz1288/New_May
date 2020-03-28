#include "Robot.h"
Robot *Robot::inst_ = nullptr;
Robot *CRobot = Robot::getRobot();

Robot *Robot::getRobot()
{
    if (inst_ == nullptr)
        inst_ = new Robot();
    /* Speech */
    Speech *CSpeech = CRobot->CSpeech;

    /* Vision */
    Vision *CVision = CRobot->CVision;

    /* Body */
    Body *CBody = CRobot->CBody;
    // Head and Lifting
    HeadandLiftingPlatform *CHeadandLifting = CRobot->CBody->CHeadandLifting;
    // Arm
    SaleArmLeft *CLeftArm = CRobot->CBody->CSaleArmLeft;
    SaleArmRight *CRightArm = CRobot->CBody->CSaleArmRight;
    // MobilePlatform
    CMobilePlatform = CRobot->CBody->CMobilePlatform;
    CSteering = CRobot->CBody->CMobilePlatform->CSteering;
    CWheel = CRobot->CBody->CMobilePlatform->CWheel;
    return inst_;
}

Robot::Robot()
{
    int argc;
    char **argv;
    ros::init(argc, argv, "aiRobots");

    CVision = new Vision();
    CBody = Body::getBody();
    CSpeech = new Speech();

    cout << "Class constructed: Robot" << endl;
    cout << "================================================================================" << endl;
}

Robot::~Robot()
{
    delete CVision;
    delete CBody;
    delete CSpeech;
}