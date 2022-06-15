#ifndef BMW_CAR_H
#define BMW_CAR_H

#include "../ICar.h"

/**
 * @brief 具体产品: 宝马车
 * 
 */
class BmwCar : public ICar
{
    public:
        BmwCar();
        ~BmwCar();
        virtual string name() override;//覆写name()函数
        virtual double price() override;//覆写price()函数
        virtual int seat() override;//覆写seat()函数
};

#endif