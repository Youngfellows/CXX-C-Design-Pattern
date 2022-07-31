#ifndef REST_STATE_H
#define REST_STATE_H

#include "../interface/IState.h"
#include "./WorkingState.h"
#include "./OvertimeState.h"
#include "./SleepingState.h"
// #include "./RestState.h"

/**
 * @brief 派生类: 休息状态
 *
 */
class RestState : public IState
{
private:
public:
    RestState();
    ~RestState();
    virtual void doAction(IWork *work) override;
};
#endif