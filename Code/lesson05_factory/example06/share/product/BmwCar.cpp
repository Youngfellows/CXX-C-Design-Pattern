#include "../../include/product/BmwCar.h"

BmwCar::BmwCar()
{
    cout << "BmwCar()构造函数" << endl;
}

BmwCar::~BmwCar()
{
    cout << "~BmwCar()析构函数" << endl;
}

//覆写name()函数
string BmwCar::name()
{
    return "宝马车";
}

//覆写price()函数
double BmwCar::price()
{
    return 440000;
}

//覆写seat()函数
int BmwCar::seat()
{
    return 5;
}