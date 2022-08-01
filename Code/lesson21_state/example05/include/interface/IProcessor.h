#ifndef IPROCESSOR_H
#define IPROCESSOR_H

#include "./INetworkState.h"

//先声明类,后面再定义
// class INetworkState;

/**
 * @brief 抽象类: 抽象处理类
 *
 */
class IProcessor
{
public:
    virtual ~IProcessor() = default;
    virtual void setState(INetworkState *state) = 0;
    virtual void doAction1() = 0;
    virtual void doAction2() = 0;
    virtual void doAction3() = 0;
};

#endif