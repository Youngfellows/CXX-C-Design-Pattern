#ifndef CENTER_H
#define CENTER_H

#include "./Player.h"

/**
 * @brief 派生类: 中锋
 * 
 */
class Center : public Player
{
    public:
        Center(string name);
        ~Center() = default;
        virtual void attack() override;//实现attack()函数
        virtual void defence() override;//实现defence()函数
};
#endif