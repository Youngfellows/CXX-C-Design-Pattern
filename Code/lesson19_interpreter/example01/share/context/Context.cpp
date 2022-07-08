#include "../../include/context/Context.h"

Context::Context(int num)
{
    cout << "Context()构造函数" << endl;
    this->number = num;
}

Context::~Context()
{
    cout << "~Context()析构函数" << endl;
}

void Context::setNumber(int num)
{
    this->number = num;
}

int Context::getNumber()
{
    return this->number;
}

int Context::getResult()
{
    return this->number * 3;
}
