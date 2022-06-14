#ifndef FRUIT_FACTORY_H
#define FRUIT_FACTORY_H

#include "./AbsFruitFactory.h"
#include "./Apple.h"
#include "./Banana.h"

/**
 * @brief 具体工厂: 生产具体的水果产品
 * 
 */
class FruitFactory : public AbsFruitFactory
{
    public:
        FruitFactory();
        ~FruitFactory();
        Fruit * create(string type) override;
};
#endif