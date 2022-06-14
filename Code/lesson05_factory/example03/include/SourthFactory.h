#ifndef SOURTH_FACTORY_H
#define SOURTH_FACTORY_H

#include "./AbsFruitFactory.h"
#include "./SourthApple.h"
#include "./SourthBanana.h"

/**
 * @brief 具体工厂: 生产具体的南方水果族产品
 * 
 */
class SourthFactory : public AbsFruitFactory
{
    public:
        SourthFactory();
        ~SourthFactory();
        Fruit * createApple() override;
        Fruit * createBanana() override;
};
#endif