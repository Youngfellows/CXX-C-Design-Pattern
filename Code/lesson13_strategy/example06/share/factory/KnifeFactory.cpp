#include "../../include/factory/KnifeFactory.h"

/**
 * @brief 通过工厂生产刺刀武器
 * 
 * @return std::unique_ptr<WeaponBehavior> 返回生产的武器
 */
std::unique_ptr<WeaponBehavior> KnifeFactory::create()
{
    return std::make_unique<Knife>();//工厂生产刺刀武器
}