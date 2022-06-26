#ifndef WEAPON_BEHAVIOR_H
#define WEAPON_BEHAVIOR_H

/**
 * @brief 抽象类: 使用武器策略算法抽象类
 * 
 */
class WeaponBehavior
{
    public:
       virtual ~WeaponBehavior() = default;

       /**
        * @brief 纯虚函数,抽象接口: 使用武器
        * 
        */
       virtual void useWeapon() = 0;
};

#endif