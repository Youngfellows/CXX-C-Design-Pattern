#ifndef SQUACK_H
#define SQUACK_H

#include "../QuackBehavior.h"
#include "../Global.h"

/**
 * @brief 派生类: 吱吱叫
 * 
 */
class Squeak : public QuackBehavior
{
    public:
        Squeak() = default;
        ~Squeak() = default;
        virtual void quack() override;//实现quack()函数
};

#endif