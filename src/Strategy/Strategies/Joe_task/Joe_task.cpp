#include "Joe_task.h"

Joe_task::Joe_task()
{
    CSlam = new Rtabmap_Slam_Node();
}

Joe_task::~Joe_task()
{
    delete CSlam;
}

void Joe_task::Task_1()
{
    //Start->1
    CMobilePlatform->MoveForward(0.2, 400);
    CMobilePlatform->SelfTurn(84, 400);
    CMobilePlatform->MoveForward(2.1, 400);
    CMobilePlatform->SelfTurn(-84, 400);
    //雙手預備
    CRightArm->GotoPosition(0, 400, -200, 0, 0, -20, 0);
    CLeftArm->GotoPosition(0, 400, -200, 0, 0, 0, 0);
    CMobilePlatform->MoveForward(0.3, 400);
    CMobilePlatform->SelfTurn(-30, 400);
    CMobilePlatform->MoveForward(0.15, 400);
    CLeftArm->ReleaseObj();
    //左手抓碗
    CLeftArm->GotoPosition(30, 450, -150, 100, 0, -20, 0);
    CLeftArm->GotoPosition(30, 550, -150, 100, 0, -20, 0);
    CLeftArm->GotoPosition(30, 550, -260, 100, 0, -20, 0);
    CLeftArm->GraspObj(-20);
    //右手抓碗
    CLeftArm->GotoPosition(30, 550, -200, 100, 0, -20, 0);
    CRightArm->GotoPosition(0, 400, -150, 0, 0, 0, 0);
    CRightArm->GotoPosition(0, 500, -150, 0, 0, 0, 0);
    CRightArm->GotoPosition(0, 500, -150, 0, 0, 0, -40);
    CRightArm->GotoPosition(0, 500, -150, -100, 0, 0, -40);
    CRightArm->GotoPosition(-20, 500, -150, -100, 0, 0, -40);
    CRightArm->GotoPosition(-20, 550, -200, -130, 0, 0, -40);
    CRightArm->GotoPosition(-20, 550, -270, -130, 0, 0, -40);
    CRightArm->GraspObj(-30);
    //疊碗
    CRightArm->GotoPosition(-20, 550, -200, -130, 0, 0, -40);
    CRightArm->GotoPosition(-20, 550, -50, -130, 0, 0, -40);
    CLeftArm->GotoPosition(30, 550, -200, 250, 0, -20, 0);
    CLeftArm->GotoPosition(30, 550, -200, 300, 0, -20, 0);
    CRightArm->GotoPosition(-40, 550, -50, -250, 0, 0, -40);
    CRightArm->GotoPosition(-60, 550, -50, -280, 0, 0, -40);
    CRightArm->GotoPosition(-60, 550, -130, -280, 0, 0, -40);
    CRightArm->ReleaseObj();
    CRightArm->GotoPosition(-60, 550, -50, -280, 0, 0, -40);
    CRightArm->GotoPosition(0, 550, -50, -10, 0, 0, 0);
    CRightArm->GotoPosition(0, 450, -50, 0, 0, 0, 0);
    CLeftArm->GotoPosition(30, 550, -200, 250, 0, -20, 0);

    //1->2
    CMobilePlatform->SelfTurn(34, 400);
    CMobilePlatform->MoveLeft(0.15, 400);
    CMobilePlatform->MoveForward(0.5, 400);
    CMobilePlatform->SelfTurn(-30, 400);
    //右手抓碗
    CRightArm->GotoPosition(0, 450, -260, 0, 0, 0, 0);
    CRightArm->GotoPosition(0, 500, -260, 0, 0, 0, 0);
    CRightArm->GotoPosition(0, 550, -260, -20, 0, 0, 0);
    CRightArm->GotoPosition(0, 580, -260, -20, 0, 0, 0);
    CRightArm->GraspObj(-20);
    //疊碗
    CRightArm->GotoPosition(0, 580, -100, -20, 0, 0, 0);
    CLeftArm->GotoPosition(30, 550, -200, 300, 0, -20, 0);
    CRightArm->GotoPosition(-40, 550, -100, -150, 0, 0, 0);
    CRightArm->GotoPosition(-40, 550, -100, -150, 0, 0, 0);
    CRightArm->GotoPosition(-50, 550, -100, -150, 0, 20, 0);
    CRightArm->GotoPosition(-50, 550, -100, -280, 0, 20, 0);
    CRightArm->GotoPosition(-50, 550, -120, -280, 0, 20, 0);
    CRightArm->ReleaseObj();
    CRightArm->GotoPosition(-50, 550, -100, -280, 0, 20, 0);
    CRightArm->GotoPosition(-20, 550, -100, -150, 0, 0, 0);
    CRightArm->GotoPosition(0, 450, -100, 0, 0, 0, 0);
    CLeftArm->GotoPosition(0, 450, -200, 0, 0, 0, 0);
    CLeftArm->GotoPosition(0, 450, -100, 0, 0, 0, 0);

    //2->3
    CMobilePlatform->SelfTurn(35, 400); //not sure
    CMobilePlatform->MoveForward(1, 400);
    CMobilePlatform->SelfTurn(-82, 400);
    CMobilePlatform->MoveForward(1, 400);
    CMobilePlatform->SelfTurn(-82, 400);
    CMobilePlatform->MoveForward(0.1, 400);
    //碗放進托盤
    CLeftArm->GotoPosition(0, 450, -180, 0, 0, 0, 0);
    CLeftArm->ReleaseObj();
    CLeftArm->GotoPosition(0, 450, -100, 0, 0, 0, 0);
    //抓托盤

    //3->4
    CMobilePlatform->MoveBackward(0.1, 400);
    CMobilePlatform->SelfTurn(82, 400);
    CMobilePlatform->MoveForward(1, 400);
    //給人

    //4->5
    CMobilePlatform->SelfTurn(-82, 400);
    CMobilePlatform->MoveForward(1, 400);
    CMobilePlatform->SelfTurn(-82, 400);
    CMobilePlatform->MoveForward(0.1, 400);
    //抓桶子

    //5->6
    CMobilePlatform->MoveBackward(0.1, 400);
    CMobilePlatform->SelfTurn(-82, 400);
    CMobilePlatform->MoveForward(1, 400);
    CMobilePlatform->SelfTurn(-82, 400);
    //給桶子
    CMobilePlatform->SelfTurn(-82, 400);
    CMobilePlatform->MoveForward(2.3, 400);
    CMobilePlatform->SelfTurn(180, 400);
}

void Joe_task::Task_2()
{
    //S->1
    CMobilePlatform->MoveForward(0.4, 400);
    CMobilePlatform->SelfTurn(82, 400);
    CMobilePlatform->MoveForward(1.3, 400);
    CRightArm->GotoPosition(0, 400, -200, 0, 0, 0, 0);
    CLeftArm->GotoPosition(0, 400, -200, 0, 0, 0, 0);
    CMobilePlatform->SelfTurn(-82, 400);
    CMobilePlatform->MoveForward(0.1, 400);
    //拿女包包

    //1->2
    CMobilePlatform->MoveBackward(0.1, 400);
    CMobilePlatform->SelfTurn(-82, 400);
    CMobilePlatform->MoveForward(1.3, 400);
    CMobilePlatform->SelfTurn(82, 400);
    CMobilePlatform->MoveForward(2, 400);
    CMobilePlatform->MoveLeft(0.6, 400);
    //放女包包

    //2->3
    CMobilePlatform->SelfTurn(82, 400);
    CMobilePlatform->MoveForward(2, 400);
    //拿玩具

    //3->4
    CMobilePlatform->SelfTurn(180, 400);
    CMobilePlatform->MoveForward(2.4, 400);
    CMobilePlatform->SelfTurn(82, 400);
    //放玩具

    //4->5
    CMobilePlatform->SelfTurn(82, 400);
    CMobilePlatform->MoveForward(2.2, 400);
    CMobilePlatform->SelfTurn(82, 400);
    CMobilePlatform->MoveForward(2.5, 400);
    CMobilePlatform->MoveRight(0.3, 400);
    //拿男包包

    //5->6
    CMobilePlatform->MoveLeft(0.3, 400);
    CMobilePlatform->SelfTurn(180, 400);
    CMobilePlatform->MoveForward(2.6, 400);
    CMobilePlatform->SelfTurn(-82, 400);
    CMobilePlatform->MoveForward(1.8, 400);
    CMobilePlatform->SelfTurn(82, 400);
    //放男包包

    //6->7
    CMobilePlatform->SelfTurn(82, 400);
    CMobilePlatform->MoveForward(0.6, 400);
    CMobilePlatform->SelfTurn(82, 400);
    CMobilePlatform->MoveForward(0.3, 400);
    //拿垃圾

    //7->8
    CMobilePlatform->MoveLeft(0.4, 400);
    //放垃圾
    //拿籃子

    //8->9
    CMobilePlatform->MoveBackward(0.4, 400);
    CMobilePlatform->SelfTurn(-90, 400);
    CMobilePlatform->MoveForward(2, 400);
    //放籃子

    //9->F
    CMobilePlatform->SelfTurn(180, 400);
    CMobilePlatform->MoveForward(0.7, 400);
    CMobilePlatform->SelfTurn(-82, 400);
    CMobilePlatform->MoveForward(1.7, 400);
    CMobilePlatform->SelfTurn(180, 400);
}

void Joe_task::slam_test()
{
    CSlam->pub_fakecmdvel_function();
    CSlam->pub_fakecmdvel_function();
    CSlam->pub_fakecmdvel_function();
    // CSlam->set_GoalPose(1, 1, 1, 0, 0, 0, 0);
    // CSlam->pub_set_GoalPose_function();
    // CSlam->pub_set_GoalPose_function();
    CSlam->Navigation();
    CLeftArm->GotoPosition(0, 350, -300, 0, 0, 0);
}
