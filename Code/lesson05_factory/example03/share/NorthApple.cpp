#include "../include/NorthApple.h"

NorthApple::NorthApple()
{
    cout << "NorthApple()构造函数" << endl;
}

NorthApple::NorthApple(string name,double price_)
{
    cout << "NorthApple()有参数构造函数" << endl;
    this->name = name;
    this->price_ = price_;
}

NorthApple::~NorthApple()
{
    cout << "~NorthApple()析构函数" << endl;
}

string NorthApple::fruit()
{
    cout << this->name << endl;
    return this->name;
}

double NorthApple::price()
{
    cout << this->name <<",价钱:" << this->price_ << endl;
    return this->price_;
}
