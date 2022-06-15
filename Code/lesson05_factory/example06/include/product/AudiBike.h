#ifndef AUDI_BIKE_H
#define AUDI_BIKE_H

#include "../IBike.h"

/**
 * @brief 具体产品: 奥迪自行车
 * 
 */
class AudiBike : public IBike
{
    public:
        AudiBike();
        ~AudiBike();
        virtual string name() override;//覆写name()函数
        virtual double price() override;//覆写price()函数
        virtual int seat() override;//覆写seat()函数
};

#endif