#include "../include/Car.h"

Car::Car(Engine *engine)
{
    cout << "Car()构造函数" << endl;
    this->engine = engine;
}

Car::~Car()
{
    cout << "~Car()析构函数" << endl;
    if (this->engine != nullptr)
    {
        this->engine = nullptr;
    }
}
