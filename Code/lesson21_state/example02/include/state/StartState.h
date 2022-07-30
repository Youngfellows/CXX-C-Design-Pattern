#ifndef START_STATE_H
#define START_STATE_H

#include "../interface/IState.h"

/**
 * @brief 派生类: 开始状态
 *
 */
class StartState : public IState
{
public:
    StartState();
    ~StartState();
    virtual void doAction(std::shared_ptr<IContext> context) override; //实现doAction()函数
    virtual std::string toString() override;                           //实现toString()函数
};
#endif