#include "../../include/factory/AK47Factory.h"

/**
 * @brief 通过工厂生产AK47武器
 * 
 * @return std::unique_ptr<WeaponBehavior> 返回生产的武器
 */
std::unique_ptr<WeaponBehavior> AK47Factory::create()
{
    return std::make_unique<AK47>();//工厂生产AK47武器
}