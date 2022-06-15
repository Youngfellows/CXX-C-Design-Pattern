#ifndef BENZ_BIKE_H
#define BENZ_BIKE_H

#include "../IBike.h"

/**
 * @brief 具体产品: 奔驰自行车
 * 
 */
class BenzBike : public IBike
{
    public:
        BenzBike();
        ~BenzBike();
        virtual string name() override;//覆写name()函数
        virtual double price() override;//覆写price()函数
        virtual int seat() override;//覆写seat()函数
};

#endif