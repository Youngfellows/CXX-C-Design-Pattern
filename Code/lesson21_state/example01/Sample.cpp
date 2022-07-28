#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //状态模式
    std::shared_ptr<IWorker> worker = std::make_shared<Worker>(); //工作者
    worker->setHour(7);
    worker->doSomeThing();

    worker->setHour(11); //改变状态
    worker->doSomeThing();

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