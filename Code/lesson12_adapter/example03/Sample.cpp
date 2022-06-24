#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //适配器模式,使用新接口的充电器
    std::unique_ptr<IRussiaSocket> charger = std::make_unique<HuaWeiCharger>();//华为充电器
    charger->charge();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //适配器模式,使自己的充电器也能够适配新的接口
    std::unique_ptr<OwnCharger> ownCharger = std::make_unique<OwnCharger>();//我的老充电器
    std::unique_ptr<IRussiaSocket> charger = std::make_unique<PowerAdapter>(std::move(ownCharger));//使用适配器适配我的老充电器,支持新接口
    charger->charge();

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