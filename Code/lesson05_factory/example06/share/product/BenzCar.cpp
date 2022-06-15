#include "../../include/product/BenzCar.h"

BenzCar::BenzCar()
{
    cout << "BenzCar()构造函数" << endl;
}

BenzCar::~BenzCar()
{
    cout << "~BenzCar()析构函数" << endl;
}

//覆写name()函数
string BenzCar::name()
{
    return "奔驰车";
}

//覆写price()函数
double BenzCar::price()
{
    return 330000;
}

//覆写seat()函数
int BenzCar::seat()
{
    return 5;
}