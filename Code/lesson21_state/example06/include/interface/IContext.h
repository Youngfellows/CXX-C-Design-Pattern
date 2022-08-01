#ifndef ICONTEXT_H
#define ICONTEXT_H

#include "../Global.h"
#include "./ActionType.h"
#include "./IState.h"

//先声明类,后面再定义
class IState;

/**
 * @brief 抽象接口: 上下文环境类
 *
 */
class IContext
{
public:
    virtual ~IContext() = default;
    virtual void doAction(ActionType actionType) = 0;
    virtual void setClock(int hour) = 0;
    virtual void stateChange(IState *state) = 0;
    virtual void callSecurityCenter(const std::string &msg) = 0;
    virtual void recoderLog(const std::string &msg) = 0;
};

#endif