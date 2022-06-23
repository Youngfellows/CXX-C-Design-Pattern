#ifndef MOCHA_H
#define MOCHA_H

#include "./CondimentDecorator.h"

/**
 * @brief 派生类: 摩卡咖啡装饰器
 * 
 */
class Mocha : public CondimentDecorator
{       
    public:
        Mocha(std::unique_ptr<Beverage> beverage);
        ~Mocha() = default;
        virtual string getDescription() override;//实现getDescription()函数
        virtual double cost() override;//实现cost()函数

    private:
        string name();//获取名称
        string addSugar();//加糖
        string addMilk();//加牛奶
};
#endif