#ifndef CONTEXT_H
#define CONTEXT_H

#include "../interface/IContext.h"

/**
 * @brief 派生类: 上下文派生类
 *
 */
class Context : public IContext
{
private:
    IState *state; //当前状态

public:
    Context();
    Context(IState *state);
    ~Context();
    virtual void setState(IState *state) override; //实现setState()函数
    virtual IState *getState() override;           //实现getState()函数
};
#endif