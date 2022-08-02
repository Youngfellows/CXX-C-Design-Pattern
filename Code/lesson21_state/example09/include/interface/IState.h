#ifndef ISTATE_H
#define ISTATE_H

#include "./IWar.h"

//先声明类,后面再定义
class IWar;

/**
 * @brief 抽象类: 状态抽象接口
 *
 */
class IState
{
public:
    virtual ~IState() = default;
    virtual void getCurrentState(IWar *war) = 0; //获取当前战争状态
};
#endif