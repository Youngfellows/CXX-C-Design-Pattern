#ifndef CHARACTER_H
#define CHARACTER_H

#include "./WeaponFactory.h"

/**
 * @brief 客户端抽象类接口
 * 
 */
class Character
{
    protected:
        std::unique_ptr<WeaponFactory> factory = nullptr;//生产武器的工厂  

    public:
       Character() = default;
       virtual ~Character();
       Character(std::unique_ptr<WeaponFactory> factory);

       /**
        * @brief 设置生产武器的工厂
        * 
        * @param factory 生产武器的工厂
        */
       void setWeaponFactory(std::unique_ptr<WeaponFactory> factory);

        /**
         * @brief 纯虚函数,抽象接口: 使用武器攻击,打仗
         * 
         */
       virtual void fight() = 0;
};
#endif 