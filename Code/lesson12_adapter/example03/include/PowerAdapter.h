#ifndef POWER_ADAPTER_H
#define POWER_ADAPTER_H

#include "./IRussiaSocket.h"
#include "./OwnCharger.h"

/**
 * @brief 适配器,使自己的充电器能够适配俄罗斯插座
 * 
 */
class PowerAdapter : public IRussiaSocket
{
    private:
        std::unique_ptr<OwnCharger> ownCharger = nullptr;//被适配对象

    public:
        PowerAdapter(std::unique_ptr<OwnCharger> ownCharger);
        ~PowerAdapter();
        virtual void charge() override;//实现charge()函数
};

#endif