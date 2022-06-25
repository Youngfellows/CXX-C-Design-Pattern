#ifndef FORWARDS_H
#define FORWARDS_H

#include "./Player.h"

/**
 * @brief 派生类: 前锋
 * 
 */
class Forwards : public Player
{
    public:
        Forwards(string name);
        ~Forwards() = default;
        virtual void attack() override;//实现attack()函数
        virtual void defence() override;//实现defence()函数
};
#endif