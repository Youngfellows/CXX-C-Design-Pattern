#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //创建对象,动态申请内存
    Car *car = new RunCar("宝马");
    car->show();

    //释放内存
    delete car;
    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //装饰器模式,创建对象,动态申请内存
    Car *car = new RunCar("奔驰");
    //普通车,没有装饰过的
    car->show();
    cout << endl;

    //装饰一下跑车,会飞的
    car = new FlyCarDecorator(car);
    car->show();
    cout << endl;

    //装饰一下跑车,会游的
    car = new SwimCarDecorator(car);
    car->show();
    cout << endl;

    //释放内存
    delete car;
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