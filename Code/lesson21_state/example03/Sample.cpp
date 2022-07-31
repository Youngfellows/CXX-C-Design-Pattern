#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //状态模式
    std::shared_ptr<IWork> worker = std::make_shared<Worker>();
    worker->setHour(15);   //设置时间
    worker->doSomeThing(); //调用做某事

    worker->setHour(18);
    worker->doSomeThing();

    worker->setHour(19);
    worker->setFinish(false);
    worker->doSomeThing();

    worker->setHour(20);
    worker->setFinish(true);
    worker->doSomeThing();

    // cout << "xxxxxxxxx" << endl;
    worker->setFinish(false);
    worker->setHour(23);
    worker->doSomeThing();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;

    //状态模式
    std::shared_ptr<IWork> worker = std::make_shared<Worker>();
    worker->setHour(23); //设置时间
    worker->setFinish(false);
    worker->doSomeThing(); //调用做某事

    worker->setHour(9);
    worker->setFinish(true);
    worker->doSomeThing();

    worker->setHour(14);
    worker->setFinish(false);
    worker->doSomeThing();

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