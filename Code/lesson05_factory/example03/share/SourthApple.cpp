#include "../include/SourthApple.h"

SourthApple::SourthApple()
{
    cout << "NorthApple()构造函数" << endl;
}

SourthApple::SourthApple(string name,double price_)
{
    cout << "NorthApple()有参数构造函数" << endl;
    this->name = name;
    this->price_ = price_;
}

SourthApple::~SourthApple()
{
    cout << "~SourthApple()析构函数" << endl;
}

string SourthApple::fruit()
{
    cout << this->name << endl;
    return this->name;
}

double SourthApple::price()
{
    cout << this->name <<",价钱:" << this->price_ << endl;
    return this->price_;
}
