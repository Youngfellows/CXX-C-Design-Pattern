#include "../../include/product/AudiBike.h"

AudiBike::AudiBike()
{
    cout << "AudiBike()构造函数" << endl;
}

AudiBike::~AudiBike()
{
    cout << "~AudiBike()析构函数" << endl;
}

//覆写name()函数
string AudiBike::name()
{
    return "奥迪自行车";
}

//覆写price()函数
double AudiBike::price()
{
    return 2200;
}

//覆写seat()函数
int AudiBike::seat()
{
    return 3;
}