#ifndef STOP_STATE_H
#define STOP_STATE_H

#include "../interface/IState.h"

/**
 * @brief 派生类: 停止状态
 *
 */
class StopState : public IState
{
public:
    StopState();
    ~StopState();
    virtual void doAction(std::shared_ptr<IContext> context) override; //实现doAction()函数
    virtual std::string toString() override;                           //实现toString()函数
};
#endif