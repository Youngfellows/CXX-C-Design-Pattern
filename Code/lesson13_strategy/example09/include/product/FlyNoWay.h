#ifndef FLY_NO_WAY_H
#define FLY_NO_WAY_H

#include "../Global.h"
#include "../FlyBehavior.h"

/**
 * @brief 派生类: 不能飞
 * 
 */
class FlyNoWay : public FlyBehavior
{
    public:
        FlyNoWay() = default;
        ~FlyNoWay() = default;
        virtual void fly() override;//实现fly()接口
};
#endif