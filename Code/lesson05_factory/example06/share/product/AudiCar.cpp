#include "../../include/product/AudiCar.h"

AudiCar::AudiCar()
{
    cout << "AudiCar()构造函数" << endl;
}

AudiCar::~AudiCar()
{
    cout << "~AudiCar()析构函数" << endl;
}

//覆写name()函数
string AudiCar::name()
{
    return "奥迪车";
}

//覆写price()函数
double AudiCar::price()
{
    return 550000;
}

//覆写seat()函数
int AudiCar::seat()
{
    return 7;
}