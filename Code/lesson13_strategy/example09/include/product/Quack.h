#ifndef QUACK_H
#define QUACK_H

#include "../QuackBehavior.h"
#include "../Global.h"

/**
 * @brief 派生类: 呱呱叫
 * 
 */
class Quack : public QuackBehavior
{
    public:
        Quack() = default;
        ~Quack() = default;
        virtual void quack() override;//实现quack()函数
};

#endif