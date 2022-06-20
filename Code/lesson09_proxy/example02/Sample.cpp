#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //代理模式
    std::shared_ptr<SchoolGirl> girl = std::make_shared<SchoolGirl>("娇娇");
    std::shared_ptr<Proxy> proxy = std::make_shared<Proxy>(girl);

    //通过代理访问被代理对象
    proxy->giveDolls();
    proxy->giveFlowers();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
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