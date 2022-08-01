#ifndef NETWORK_PROCESSOR_H
#define NETWORK_PROCESSOR_H

#include "../interface/INetworkState.h"
#include "../interface/IProcessor.h"

/**
 * @brief 派生类: 网络处理
 *
 */
class NetworkProcessor : public IProcessor
{
private:
    INetworkState *state; //当前网络状态

public:
    NetworkProcessor(INetworkState *state);
    ~NetworkProcessor();
    virtual void setState(INetworkState *state) override;
    virtual void doAction1() override;
    virtual void doAction2() override;
    virtual void doAction3() override;
};
#endif