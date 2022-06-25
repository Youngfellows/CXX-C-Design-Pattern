#ifndef OWN_CHARGER_H
#define OWN_CHARGER_H

#include "./Global.h"
#include "./Current18v.h"

/**
 * @brief 派生类: 实现了新18v接口的充电器
 * 
 */
class OwnCharger : public Current18v
{
    public:
        OwnCharger() = default;
        ~OwnCharger() = default;
        virtual void useCurrent18v() override;//实现useCurrent18v()函数
};
#endif