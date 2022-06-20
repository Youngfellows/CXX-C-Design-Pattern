#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //代理模式
    std::shared_ptr<Subject> subject = std::make_shared<ConcreteSubject>();//subject指针指向一个真实主体对象
    std::shared_ptr<Proxy> proxy = std::make_shared<Proxy>(subject); //定义代理对象
    proxy->request(); //通过代理完成主体需要的操作

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