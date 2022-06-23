#include "../include/Car.h"

Car::Car(const string &name)
{
    cout << "Car()显示复制构造函数" << endl;
    this->name = name;
}

Car::Car(string &&name)
{
    cout << "Car()显示移动构造函数" << endl;
    this->name = std::move(name);
}

string Car::getName()
{
    return this->name;
}