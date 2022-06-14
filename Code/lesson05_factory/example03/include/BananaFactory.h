#ifndef BANANA_FACTORY_H
#define BANANA_FACTORY_H

#include "./AbsFruitFactory.h"
#include "./Banana.h"

/**
 * @brief 具体工厂: 生产具体的水果产品
 * 
 */
class BananaFactory : public AbsFruitFactory
{
    public:
        BananaFactory();
        ~BananaFactory();
        Fruit * create() override;
};
#endif