#ifndef WEAPON_FACTORY_H
#define WEAPON_FACTORY_H

#include "./Global.h"
#include "./WeaponBehavior.h"

/**
 * @brief 工厂方法模式: 生产武器的工厂抽象方法
 * 
 */
class WeaponFactory
{
    public:
       virtual ~WeaponFactory() = default;

       /**
        * @brief 纯虚函数,抽象方法: 工厂生产武器产品
        * 
        * @return std::unique_ptr<WeaponBehavior> 返回生产的武器产品
        */
       virtual std::unique_ptr<WeaponBehavior> create() = 0;
};

#endif