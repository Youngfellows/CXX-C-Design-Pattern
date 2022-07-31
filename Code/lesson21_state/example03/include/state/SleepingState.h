#ifndef SLEEPINT_STATE_H
#define SLEEPINT_STATE_H

#include "../interface/IState.h"
#include "./WorkingState.h"
#include "./OvertimeState.h"
// #include "./SleepingState.h"
#include "./RestState.h"


/**
 * @brief 派生类: 睡眠状态
 *
 */
class SleepingState : public IState
{
private:
public:
    SleepingState();
    ~SleepingState();
    virtual void doAction(IWork *work) override;
};
#endif