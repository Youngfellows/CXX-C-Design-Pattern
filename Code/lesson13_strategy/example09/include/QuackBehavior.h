#ifndef QUACK_BEHAVIOR_H
#define QUACK_BEHAVIOR_H

/**
 * @brief 抽象类: 呱呱叫
 * 
 */
class QuackBehavior
{
    public:
        virtual ~QuackBehavior() = default;

        /**
         * @brief 纯虚函数,抽象接口: 呱呱叫
         * 
         */
        virtual void quack() = 0;
};

#endif