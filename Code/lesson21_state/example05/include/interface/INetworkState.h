#ifndef INETWORK_STATE_H
#define INETWORK_STATE_H

#include "../Global.h"

/**
 * @brief 抽象类: 网络状态抽象类
 *
 */
class INetworkState
{
protected:
    INetworkState *next; //下一个状态

public:
    virtual ~INetworkState() = default;
    virtual void operation1() = 0;
    virtual void operation2() = 0;
    virtual void operation3() = 0;
    INetworkState *getNext();
};
#endif