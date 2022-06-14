#include "../include/DivOperation.h"

DivOperation::DivOperation()
{
    cout << "DivOperation()构造函数" << endl;
}

DivOperation::~DivOperation()
{
    cout << "~DivOperation()析构函数" << endl;
}

/**
* @brief 派生类具体实现
* 
* @return double 返回相除结果
*/
double DivOperation::getResult()
{
    return this->numberA / this->numberB;
}