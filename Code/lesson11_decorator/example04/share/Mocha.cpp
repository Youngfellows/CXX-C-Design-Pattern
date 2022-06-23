#include "../include/Mocha.h"

/**
 * @brief 构造函数,并初始化被装饰对象
 * 
 * @param beverage 被装饰对象
 */
Mocha::Mocha(std::unique_ptr<Beverage> beverage) : CondimentDecorator(std::move(beverage))
{
    cout << "Mocha()构造函数" << endl;
}

string Mocha::name()
{
    return "摩卡";
}

string Mocha::addSugar()
{
    return "加糖";
}

string Mocha::addMilk()
{
    return "加牛奶";
}

string Mocha::getDescription()
{
    return this->name() + "," + CondimentDecorator::getDescription() + "," + this->addSugar() + "," + this->addMilk();
}

double Mocha::cost()
{
    return 15.5 + CondimentDecorator::cost();
}