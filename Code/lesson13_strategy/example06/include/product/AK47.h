#ifndef AK47_H
#define AK47_H

#include "../Global.h"
#include "../WeaponBehavior.h"

/**
 * @brief 派生类: 具体的武器产品,AK47步枪
 * @brief 实现WeaponBehavior接口
 */
class AK47 : public WeaponBehavior
{
    public:
        AK47() = default;
        ~AK47() = default;
        virtual void useWeapon() override;//是西安useWeapon()函数
};
#endif