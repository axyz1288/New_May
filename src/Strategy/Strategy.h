#pragma once
#include <string>
#include "Strategies/Joe_task/Joe_task.h"

class Strategy
{
public:
    Strategy();
    ~Strategy();

    void select_strategy(std::string strategy_name);
    void terminate_strategy();

private:
    bool isStrategyRunning;

    // add strategy below !!!!!!!!
    // Demo_catch_YOLO *cDemoCatchYolo;
    Joe_task *cJoe_task;
};