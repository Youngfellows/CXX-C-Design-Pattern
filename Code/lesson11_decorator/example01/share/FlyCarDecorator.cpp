#include "../include/FlyCarDecorator.h"

FlyCarDecorator::FlyCarDecorator(Car *car)
{
    cout << "FlyCarDecorator()构造函数" << endl;
    this->car = car;
}

FlyCarDecorator::~FlyCarDecorator()
{
    cout << "~FlyCarDecorator()析构函数" << endl;
    if(this->car != nullptr)
    {
        delete this->car;
        this->car = nullptr;
    }
}

void FlyCarDecorator::show()
{
    cout << "FlyCarDecorator::show():: ..." << endl;
    //调用被装饰对象的方法
    this->car->show();
    this->swim();
}

void FlyCarDecorator::swim()
{
    cout << "FlyCarDecorator::swim():: 可以飞 ..." << endl;
}