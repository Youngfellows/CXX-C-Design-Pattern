#include "../include/Character.h"

Character::Character(std::unique_ptr<WeaponFactory> factory)
{
    this->factory = std::move(factory);
}

/**
 * @brief 设置生产武器的工厂
 * 
 * @param factory 生产武器的工厂
 */
void Character::setWeaponFactory(std::unique_ptr<WeaponFactory> factory)
{
    this->factory = std::move(factory);
}

Character::~Character()
{
    if(this->factory != nullptr)
    {
        this->factory = nullptr;
    }
}