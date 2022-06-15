#ifndef BENZ_FACTORY_H
#define BENZ_FACTORY_H

#include "../IFactory.h"
#include "../product/BenzCar.h"
#include "../product/BenzBike.h"

/**
 * @brief 具体工厂类: 奔驰工厂,生产奔驰车 + 奔驰自行车
 * 
 */
class BenzFactory : public IFactory
{
    public:
        BenzFactory();
        ~BenzFactory();
        virtual std::unique_ptr<ICar> createCar() override;//覆写createCar()函数
        virtual std::unique_ptr<IBike> createBike() override;//覆写createBike()函数
};
#endif