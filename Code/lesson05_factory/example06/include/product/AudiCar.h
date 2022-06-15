#ifndef AUDI_CAR_H
#define AUDI_CAR_H

#include "../ICar.h"

/**
 * @brief 具体产品: 奥迪车
 * 
 */
class AudiCar : public ICar
{
    public:
        AudiCar();
        ~AudiCar();
        virtual string name() override;//覆写name()函数
        virtual double price() override;//覆写price()函数
        virtual int seat() override;//覆写seat()函数
};

#endif