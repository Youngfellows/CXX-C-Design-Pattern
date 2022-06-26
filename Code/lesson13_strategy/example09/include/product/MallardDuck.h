#ifndef MALLAR_DUCK_H
#define MALLAR_DUCK_H

#include "../Duck.h"
#include "./FlyWithWings.h"
#include "./Quack.h"

/**
 * @brief 野鸭
 * 
 */
class MallardDuck : public Duck
{
    public:
        MallardDuck();
        ~MallardDuck() = default;
        virtual void display() override;//覆写display()函数
};

#endif