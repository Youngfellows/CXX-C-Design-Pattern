#ifndef ISTATE_H
#define ISTATE_H

#include "./IContext.h"

//先声明类,后面再定义
class IContext;

/**
 * @brief 抽象类: 状态抽象类
 *
 */
class IState
{
public:
    virtual ~IState() = default;
    virtual void doColock(IContext *ctx, int hour) = 0;
    virtual void doUse(IContext *ctx) = 0;
    virtual void doAlarm(IContext *ctx) = 0;
    virtual void doPhone(IContext *ctx) = 0;
};
#endif