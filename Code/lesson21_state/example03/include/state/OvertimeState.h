#ifndef OVERTIME_STATE_H
#define OVERTIME_STATE_H

#include "../Global.h"
#include "../interface/IState.h"
#include "./WorkingState.h"
// #include "./OvertimeState.h"
#include "./SleepingState.h"
#include "./RestState.h"

/**
 * @brief 派生类: 加班状态
 *
 */
class OvertimeState : public IState
{
private:
public:
    OvertimeState();
    ~OvertimeState();
    virtual void doAction(IWork *work) override;
};
#endif