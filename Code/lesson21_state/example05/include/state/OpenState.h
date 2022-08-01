#ifndef OPEN_STATE_H
#define OPEN_STATE_H

#include "../interface/INetworkState.h"
#include "../state/CloseState.h"
#include "../state/ConnectState.h"
// #include "../state/OpenState.h"

/**
 * @brief 派生类: 打开网络状态
 *
 */
class OpenState : public INetworkState
{
public:
    static INetworkState *instance; //单例

private:
    OpenState();

public:
    // OpenState();
    ~OpenState();
    static INetworkState *getInstance();
    virtual void operation1() override;
    virtual void operation2() override;
    virtual void operation3() override;
};
#endif