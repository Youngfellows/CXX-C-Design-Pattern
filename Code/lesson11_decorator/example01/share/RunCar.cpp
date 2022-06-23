#include "../include/RunCar.h"

RunCar::RunCar(const string &name) : Car(name)
{
    cout << "RunCar()复制构造函数" << endl;
}

RunCar::RunCar(string &&name) : Car(std::move(name))
{
    cout << "RunCar()移动构造函数" << endl;
}

RunCar::~RunCar()
{
    cout << "~RunCar()析构函数" << endl;
}

void RunCar::show()
{
    string carName = Car::getName();
    cout << "RunCar::show():: 跑车,名称是:" << carName << endl;
}
