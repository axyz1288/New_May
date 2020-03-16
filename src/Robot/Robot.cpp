#include "Robot.h"
/* Robot */
Robot *CRobot = Robot::getRobot();

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
MobilePlatform *CMobilePlatform = CRobot->CBody->CMobilePlatform;
Steering *CSteering = CRobot->CBody->CMobilePlatform->CSteering;
Wheel *CWheel = CRobot->CBody->CMobilePlatform->CWheel;

Robot *Robot::inst_ = nullptr;
Robot *Robot::getRobot()
{
    if (inst_ == nullptr)
        inst_ = new Robot();
    return inst_;
}

Robot::Robot()
{
    int argc;
    char **argv;
    ros::init(argc, argv, "aiRobots");

    CVision = new Vision();
    CBody = Body::getBody();
    // this->CMaySpeech = new Speech();

    cout << "Class constructed: Robot" << endl;
    cout << "================================================================================" << endl;
}

Robot::~Robot()
{
    delete CVision;
    delete CBody;
    // delete CMaySpeech;
}
