#ifndef READHEAD_DUCK_H
#define READHEAD_DUCK_H

#include "../Duck.h"
#include "./FlyWithWings.h"
#include "./Quack.h"

/**
 * @brief 红头鸭
 * 
 */
class RedHeadDuck : public Duck
{
    public:
        RedHeadDuck();
        ~RedHeadDuck() = default;
        virtual void display() override;//覆写display()函数
};
#endif