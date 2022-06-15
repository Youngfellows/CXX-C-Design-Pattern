#ifndef BMW_FACTORY_H
#define BMW_FACTORY_H

#include "../IFactory.h"
#include "../product/BmwCar.h"
#include "../product/BmwBike.h"

/**
 * @brief 具体工厂类: 宝马工厂,生产宝马车 + 宝马自行车
 * 
 */
class BmwFactory : public IFactory
{
    public:
        BmwFactory();
        ~BmwFactory();
        virtual std::unique_ptr<ICar> createCar() override;//覆写createCar()函数
        virtual std::unique_ptr<IBike> createBike() override;//覆写createBike()函数
};
#endif