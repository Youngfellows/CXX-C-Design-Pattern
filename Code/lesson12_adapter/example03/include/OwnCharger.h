#ifndef OWN_CHARGER_H
#define OWN_CHARGER_H

#include "./Global.h"

/**
 * @brief 自带的充电器（两脚扁型）
 * 
 */
class OwnCharger
{
    public:
        OwnCharger() = default;
        ~OwnCharger() = default;
        void ChargeWithFeetFlat();
};

#endif