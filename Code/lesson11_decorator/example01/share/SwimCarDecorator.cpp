#include "../include/SwimCarDecorator.h"

SwimCarDecorator::SwimCarDecorator(Car *car)
{
    cout << "SwimCarDecorator()构造函数" << endl;
    this->car = car;
}

SwimCarDecorator::~SwimCarDecorator()
{
    cout << "~SwimCarDecorator()析构函数" << endl;
    if(this->car != nullptr)
    {
        delete this->car;
        this->car = nullptr;
    }
}

void SwimCarDecorator::show()
{
    cout << "SwimCarDecorator::show():: ..." << endl;
    //调用被装饰对象的方法
    this->car->show();
    this->swim();
}

void SwimCarDecorator::swim()
{
    cout << "SwimCarDecorator::swim():: 可以游 ..." << endl;
}
