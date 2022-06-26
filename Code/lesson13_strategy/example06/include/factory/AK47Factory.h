#ifndef AK47_FACTORY_H
#define AK47_FACTORY_H

#include "../WeaponFactory.h"
#include "../product/AK47.h"

/**
 * @brief 派生类: 生产AK47武器的工厂
 * 
 */
class AK47Factory : public WeaponFactory
{
    public:
        AK47Factory() = default;
        ~AK47Factory() = default;
        virtual std::unique_ptr<WeaponBehavior> create() override;//实现create()函数
};
#endif