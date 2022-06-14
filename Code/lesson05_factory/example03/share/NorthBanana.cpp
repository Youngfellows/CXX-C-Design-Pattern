#include "../include/NorthBanana.h"

NorthBanana::NorthBanana()
{
    cout << "NorthBanana()构造函数" << endl;
}

NorthBanana::NorthBanana(string name,double price_)
{
    cout << "NorthBanana()有参数构造函数" << endl;
    this->name = name;
    this->price_ = price_;
}

NorthBanana::~NorthBanana()
{
    cout << "~NorthBanana()析构函数" << endl;
}

string NorthBanana::fruit()
{
    cout << this->name << endl;
    return this->name;
}

double NorthBanana::price()
{
    cout << this->name <<",价钱:" << this->price_ << endl;
    return this->price_;
}
