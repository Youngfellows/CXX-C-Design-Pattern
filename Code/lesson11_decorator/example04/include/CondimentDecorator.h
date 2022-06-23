#ifndef CONDIMENT_DECORATOR_H
#define CONDIMENT_DECORATOR_H

#include "./Beverage.h"

/**
 * @brief 抽象类: 咖啡调味品装饰器
 * @brief 同样继承接口Beverage,表示CondimentDecorator只是为了装饰Beverage
 * 
 */
class CondimentDecorator : public Beverage
{
    private:
      std::unique_ptr<Beverage> beverage = nullptr;//被装饰对象

    public:
        CondimentDecorator(std::unique_ptr<Beverage> beverage);
        ~CondimentDecorator();
        virtual string getDescription() override;//实现getDescription()函数
        virtual double cost() override;//实现cost()函数
};
#endif