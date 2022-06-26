#ifndef RUBBER_DUCK_H
#define RUBBER_DUCK_H

#include "../Duck.h"
#include "./FlyNoWay.h"
#include "./Squeak.h"

/**
 * @brief 大黄鸭
 * 
 */
class RubberDuck : public Duck
{
    public:
        RubberDuck();
        ~RubberDuck() = default;
        virtual void display() override;//覆写display()函数
};
#endif