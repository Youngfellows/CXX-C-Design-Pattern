#ifndef FLY_BEHAVIOR_H
#define FLY_BEHAVIOR_H

/**
 * @brief 抽象类: 飞的行为
 * 
 */
class FlyBehavior
{
    public:
       virtual ~FlyBehavior() = default;

       /**
        * @brief 纯虚函数,抽象接口: 飞的行为
        * 
        */
       virtual void fly() = 0;
};
#endif