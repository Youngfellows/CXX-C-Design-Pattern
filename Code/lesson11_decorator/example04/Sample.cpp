#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //装饰者模式
    std::unique_ptr<Beverage> beverage = std::make_unique<Espresso>();//蒸馏咖啡
    beverage = std::make_unique<Mocha>(std::move(beverage));//使用摩卡装饰一下

    //打印信息
    string desc =  beverage->getDescription();
    double cost_ = beverage->cost();

    cout << desc << endl;
    cout << "费用:" << cost_ << endl;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //装饰者模式
    std::unique_ptr<Beverage> beverage = std::make_unique<HouseBlend>();//混搭咖啡
    beverage = std::make_unique<Mocha>(std::move(beverage));//使用摩卡装饰一下

    //打印信息
    string desc =  beverage->getDescription();
    double cost_ = beverage->cost();
    cout << desc << endl;
    cout << "费用:" << cost_ << endl;
    
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}