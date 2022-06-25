#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //策略模式
    std::unique_ptr<CashContext> client = std::make_unique<CashContext>(NORMAL);
    double money = client->getResult(12345);
    cout << "money:" << money << endl;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //策略模式
    std::unique_ptr<CashContext> client = std::make_unique<CashContext>(REBATE);
    double money = client->getResult(12345);
    cout << "money:" << money << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    std::unique_ptr<CashContext> client = std::make_unique<CashContext>(RETURN);
    double money = client->getResult(12345);
    cout << "money:" << money << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}