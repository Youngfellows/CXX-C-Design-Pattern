#include "../include/Mercedes.h"

Mercedes::Mercedes()
{
    cout << "Mercedes()构造函数" << endl;
}

Mercedes::~Mercedes()
{
    cout << "~Mercedes()析构函数" << endl;
}

void Mercedes::makeHead()
{
    cout << "Mercedes奔驰车,造车头" << endl;
}

void Mercedes::makeBody()
{
    cout << "Mercedes奔驰车,造车身" << endl;
}

void Mercedes::makeTail()
{
    cout << "Mercedes奔驰车,造车尾" << endl;
}