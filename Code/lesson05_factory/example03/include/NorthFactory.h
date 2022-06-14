#ifndef NORTH_FACTORY_H
#define NORTH_FACTORY_H

#include "./AbsFruitFactory.h"
#include "./NorthApple.h"
#include "./NorthBanana.h"

/**
 * @brief 具体工厂: 生产具体的北方水果族产品
 * 
 */
class NorthFactory : public AbsFruitFactory
{
    public:
        NorthFactory();
        ~NorthFactory();
        Fruit * createApple() override;
        Fruit * createBanana() override;
};
#endif