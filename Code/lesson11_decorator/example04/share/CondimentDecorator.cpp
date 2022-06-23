#include "../include/CondimentDecorator.h"

/**
 * @brief 构造函数,并初始化被装饰对象
 * 
 * @param beverage 被装饰对象
 */
CondimentDecorator::CondimentDecorator(std::unique_ptr<Beverage> beverage)
{
    //不能这样初始化
    //this->beverage = beverage;
    cout << "CondimentDecorator()构造函数" << endl;
    this->beverage = std::move(beverage);
}

CondimentDecorator::~CondimentDecorator()
{
    cout << "~CondimentDecorator()析构函数" << endl;
    if(this->beverage != nullptr)
    {
        this->beverage = nullptr;
    }
}

string CondimentDecorator::getDescription()
{
    cout << "CondimentDecorator::getDescription():: ..." << endl;
    return this->beverage->getDescription();
}

double CondimentDecorator::cost()
{
    cout << "CondimentDecorator::cost():: ..." << endl;
    return this->beverage->cost();
}

