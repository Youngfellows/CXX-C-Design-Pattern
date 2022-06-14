#include "../include/Tea.h"

using namespace caffeine;

Tea::Tea()
{
    cout << "Tea()构造函数" << endl;
}

Tea::~Tea()
{
    cout << "~Tea()析构函数" << endl;
}

void Tea::brew()
{
    cout << "用沸水冲泡茶叶 ..." << endl;
}

void Tea::addCondiments()
{
    cout << "加柠檬 ..." << endl;
}