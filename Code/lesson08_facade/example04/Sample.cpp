#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //外观模式,动态申请内存,创建对象
    ComputerOperator *computerOperator = new ComputerOperator();

    //通过指针访问函数
    computerOperator->powerOn();//开机
    
    //释放内存
    delete computerOperator;
    
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