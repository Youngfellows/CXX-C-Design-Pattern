#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //适配器模式,通过适配器调用老对象
    //std::unique_ptr<IAdaptee> old = std::make_unique<OldClass>();//创建老对象
    std::unique_ptr<ITarget> target = std::make_unique<Adapter>();//通过适配器访问新接口

    //通过适配器新接口访问老对象的老接口
    target->process();

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