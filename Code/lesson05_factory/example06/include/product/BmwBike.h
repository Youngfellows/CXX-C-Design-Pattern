#ifndef BMW_BIKE_H
#define BMW_BIKE_H

#include "../IBike.h"

/**
 * @brief 具体产品: 宝马自行车
 * 
 */
class BmwBike : public IBike
{
    public:
        BmwBike();
        ~BmwBike();
        virtual string name() override;//覆写name()函数
        virtual double price() override;//覆写price()函数
        virtual int seat() override;//覆写seat()函数
};

#endif