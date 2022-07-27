#include "../../include/receiver/Television.h"

Television::Television()
{
    cout << "Television()构造函数" << endl;
}

Television::~Television()
{
    cout << "~Television()析构函数" << endl;
}

void Television::open()
{
    cout << "打开电视 ..." << endl;
}

void Television::close()
{
    cout << "关闭电视 ..." << endl;
}

void Television::changeChannel()
{
    cout << "电视切换频道 ..." << endl;
}