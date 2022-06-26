#ifndef DECOY_DUCK_H
#define DECOY_DUCK_H

#include "../Duck.h"
#include "./FlyNoWay.h"
#include "./MuteQuack.h"

/**
 * @brief 饵鸭
 * 
 */
class DecoyDuck : public Duck
{
    public:
        DecoyDuck();
        ~DecoyDuck() = default;
        virtual void display() override;//覆写display()函数
};
#endif