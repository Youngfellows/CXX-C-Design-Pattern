#ifndef AUDI_FACTORY_H
#define AUDI_FACTORY_H

#include "../IFactory.h"
#include "../product/AudiCar.h"
#include "../product/AudiBike.h"

/**
 * @brief 具体工厂类: 奥迪工厂,生产奥迪车 + 奥迪自行车
 * 
 */
class AudiFactory : public IFactory
{
    public:
        AudiFactory();
        ~AudiFactory();
        virtual std::unique_ptr<ICar> createCar() override;//覆写createCar()函数
        virtual std::unique_ptr<IBike> createBike() override;//覆写createBike()函数
};
#endif