#ifndef KNIFE_H
#define KNIFE_H

#include "../Global.h"
#include "../WeaponBehavior.h"

/**
 * @brief 派生类: 具体的武器产品,刺刀
 * @brief 实现WeaponBehavior接口
 */
class Knife : public WeaponBehavior
{
    public:
        Knife() = default;
        ~Knife() = default;
        virtual void useWeapon() override;//是西安useWeapon()函数
};
#endif