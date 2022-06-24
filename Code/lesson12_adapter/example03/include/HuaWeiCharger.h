#ifndef HUA_WEI_CHARGER_H
#define HUA_WEI_CHARGER_H

#include "./Global.h"
#include "./IRussiaSocket.h"

/**
 * @brief 派生类: 实现了俄罗斯插座的华为充电器
 * 
 */
class HuaWeiCharger : public IRussiaSocket
{
    public:
        HuaWeiCharger() = default;
        ~HuaWeiCharger() = default;
        virtual void charge() override;//实现charge()函数
};
#endif