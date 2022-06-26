#ifndef KNIFE_FACTORY_H
#define KNIFE_FACTORY_H

#include "../WeaponFactory.h"
#include "../product/KNIFE.h"

/**
 * @brief 派生类: 生产刺刀武器的工厂
 * 
 */
class KnifeFactory : public WeaponFactory
{
    public:
        KnifeFactory() = default;
        ~KnifeFactory() = default;
        virtual std::unique_ptr<WeaponBehavior> create() override;//实现create()函数
};

#endif