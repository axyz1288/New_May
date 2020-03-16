#include "../../../Robot/Robot.h"
#include "../../../Rtabmap_Slam_node/Rtabmap_Slam_node.h"

class Joe_task
{
public:
    Joe_task();
    ~Joe_task();
    void Task_1();
    void Task_2();
    void slam_test();

    Rtabmap_Slam_Node *CSlam;
};