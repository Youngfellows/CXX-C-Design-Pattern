#include "../../include/product/BmwBike.h"

BmwBike::BmwBike()
{
    cout << "BmwBike()构造函数" << endl;
}

BmwBike::~BmwBike()
{
    cout << "~BmwBike()析构函数" << endl;
}

//覆写name()函数
string BmwBike::name()
{
    return "宝马自行车";
}

//覆写price()函数
double BmwBike::price()
{
    return 900;
}

//覆写seat()函数
int BmwBike::seat()
{
    return 1;
}