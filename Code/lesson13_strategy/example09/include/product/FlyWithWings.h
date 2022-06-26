#ifndef FLY_WITH_WINGS_H
#define FLY_WITH_WINGS_H

#include "../Global.h"
#include "../FlyBehavior.h"

/**
 * @brief 派生类: 展翅飞翔
 * 
 */
class FlyWithWings : public FlyBehavior
{
    public:
        FlyWithWings() = default;
        ~FlyWithWings() = default;
        virtual void fly() override;//实现fly()接口
};
#endif