#ifndef MUTE_QUACK_H
#define MUTE_QUACK_H

#include "../QuackBehavior.h"
#include "../Global.h"

/**
 * @brief 派生类: 哑巴,不能呱呱叫
 * 
 */
class MuteQuack : public QuackBehavior
{
    public:
        MuteQuack() = default;
        ~MuteQuack() = default;
        virtual void quack() override;//实现quack()函数
};
#endif