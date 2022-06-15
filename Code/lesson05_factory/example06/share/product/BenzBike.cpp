#include "../../include/product/BenzBike.h"

BenzBike::BenzBike()
{
    cout << "BenzBike()构造函数" << endl;
}

BenzBike::~BenzBike()
{
    cout << "~BenzBike()析构函数" << endl;
}

//覆写name()函数
string BenzBike::name()
{
    return "奔驰自行车";
}

//覆写price()函数
double BenzBike::price()
{
    return 1200;
}

//覆写seat()函数
int BenzBike::seat()
{
    return 1;
}