#include "../include/SourthBanana.h"

SourthBanana::SourthBanana()
{
    cout << "SourthBanana()构造函数" << endl;
}

SourthBanana::SourthBanana(string name,double price_)
{
    cout << "SourthBanana()有参数构造函数" << endl;
    this->name = name;
    this->price_ = price_;
}

SourthBanana::~SourthBanana()
{
    cout << "~SourthBanana()析构函数" << endl;
}

string SourthBanana::fruit()
{
    cout << this->name << endl;
    return this->name;
}

double SourthBanana::price()
{
    cout << this->name <<",价钱:" << this->price_ << endl;
    return this->price_;
}
