#include "../include/Banana.h"

Banana::Banana()
{
    cout << "Banana()构造函数" << endl;
}

Banana::Banana(string name,double price_)
{
    cout << "Banana()有参数构造函数" << endl;
    this->name = name;
    this->price_ = price_;
}

Banana::~Banana()
{
    cout << "~Banana()析构函数" << endl;
}

string Banana::fruit()
{
    cout << this->name << endl;
    return this->name;
}

double Banana::price()
{
    cout << this->name <<",价钱:" << this->price_ << endl;
    return this->price_;
}
