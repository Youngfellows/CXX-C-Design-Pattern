#ifndef BACKWARDS_H
#define BACKWARDS_H

#include "./Player.h"

/**
 * @brief 派生类: 后卫
 * 
 */
class Backwards : public Player
{
    public:
        Backwards(string name);
        ~Backwards() = default;
        virtual void attack() override;//实现attack()函数
        virtual void defence() override;//实现defence()函数
};
#endif