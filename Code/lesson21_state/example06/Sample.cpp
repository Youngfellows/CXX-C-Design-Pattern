#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //状态模式
    IContext *ctx = new SafeFrame;
    for (int i = 0; i < 24; ++i)
    {
        ctx->setClock(i);
        ctx->doAction(ActionType::USE);
        ctx->doAction(ActionType::PHONE);
        ctx->doAction(ActionType::ALARM);
    }
    delete ctx;
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