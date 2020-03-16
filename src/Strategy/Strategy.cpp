#include "Strategy.h"

Strategy::Strategy()
{
    isStrategyRunning = false;
}

Strategy::~Strategy()
{
    delete cJoe_task;
}

void Strategy::select_strategy(std::string strategy_name)
{
    isStrategyRunning = true;
    while (isStrategyRunning)
    {
        // add strategy below !!!!!!!!
        if (strategy_name == "Demo_catch_YOLO")
        {
            // Demo_catch_YOLO cDemo_catch_YOLO;
            // cDemo_catch_YOLO.MainStrategy(0);
        }
        else if (strategy_name == "Joe_task")
        {
            cJoe_task = new Joe_task;
            // cJoe_task->slam_test();
            cJoe_task->Task_1();
            terminate_strategy();
            break;
        }
        else
            ;
    }
}

void Strategy::terminate_strategy()
{
    isStrategyRunning = false;
}