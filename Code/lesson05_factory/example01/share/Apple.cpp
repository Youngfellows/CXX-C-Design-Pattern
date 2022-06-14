#include "../include/Apple.h"

Apple::Apple()
{
    cout << "Apple()构造函数" << endl;
}

Apple::Apple(string name,double price_)
{
    cout << "Apple()有参数构造函数" << endl;
    this->name = name;
    this->price_ = price_;
}

Apple::~Apple()
{
    cout << "~Apple()析构函数" << endl;
}

string Apple::fruit()
{
    cout << this->name << endl;
    return this->name;
}

double Apple::price()
{
    cout << this->name <<",价钱:" << this->price_ << endl;
    return this->price_;
}
