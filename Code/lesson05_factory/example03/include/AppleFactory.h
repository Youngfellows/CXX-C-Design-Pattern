#ifndef APPLE_FACTORY_H
#define APPLE_FACTORY_H

#include "./AbsFruitFactory.h"
#include "./Apple.h"

/**
 * @brief 具体工厂: 生产具体的水果产品
 * 
 */
class AppleFactory : public AbsFruitFactory
{
    public:
        AppleFactory();
        ~AppleFactory();
        Fruit * create() override;
};
#endif