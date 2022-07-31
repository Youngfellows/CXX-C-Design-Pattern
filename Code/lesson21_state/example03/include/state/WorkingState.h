#ifndef WORKING_STATE_H
#define WORKING_STATE_H

#include "../Global.h"
#include "../interface/IState.h"
// #include "./WorkingState.h"
#include "./OvertimeState.h"
#include "./SleepingState.h"
#include "./RestState.h"

/**
 * @brief 派生类: 工作状态
 *
 */
class WorkingState : public IState
{
private:
public:
    WorkingState();
    ~WorkingState();
    virtual void doAction(IWork *work) override;
};

#endif