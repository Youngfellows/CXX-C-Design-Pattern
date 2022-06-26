#ifndef CONTEXT_H
#define CONTEXT_H

#include "./Global.h"
#include "./IContext.h"
#include "./Strategy.h"

/**
 * @brief 策略模式,算法客户端
 * 
 */
class Context : public IContext
{
    private:
        std::unique_ptr<Strategy> strategy = nullptr;//算法的具体实现

    public:
        Context() = default;
        Context(std::unique_ptr<Strategy> strategy);
        ~Context();
        virtual double excuteStrategy(double num1,double num2) override;//实现excuteStrategy()函数
};
#endif