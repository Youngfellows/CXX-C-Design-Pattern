#include "../include/Coffee.h"

using namespace caffeine;

Coffee::Coffee()
{
    cout << "Caffee()构造函数" << endl;
}

Coffee::~Coffee()
{
    cout << "~Caffee()析构函数" << endl;
}

void Coffee::brew()
{
    cout << "用沸水冲泡咖啡 ..." << endl;
}

void Coffee::addCondiments()
{
    cout << "加糖和牛奶 ..." << endl;
}