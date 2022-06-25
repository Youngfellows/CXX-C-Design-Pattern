#ifndef GOOGLE_CHARGER_H
#define GOOGLE_CHARGER_H

#include "./Global.h"
#include "./Current220v.h"


/**
 * @brief 派生类: 实现就接口220v电压的充电器
 * 
 */
class GoogleCharger : public Current220v
{
    public:
        GoogleCharger() = default;
        ~GoogleCharger() = default;
        virtual void useCurrent220v() override;//实现userCurrent220v()函数
};
#endif