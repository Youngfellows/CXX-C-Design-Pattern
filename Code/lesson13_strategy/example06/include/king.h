#ifndef KING_H
#define KING_H

#include "./Character.h"
#include "./WeaponBehavior.h"

/**
 * @brief 策略模式客户端: 国王
 * 
 */
class king : public Character
{
    public:
        //king() = default;
        king();
        king(std::unique_ptr<WeaponFactory> factory);
        ~king() = default;
        virtual void fight() override;//实现fight()函数
};
#endif