#include "../include/MulOperation.h"

MulOperation::MulOperation()
{
    cout << "MulOperation()构造函数" << endl;
}

MulOperation::~MulOperation()
{
    cout << "~MulOperation()析构函数" << endl;
}

/**
* @brief 派生类具体实现
* 
* @return double 返回相乘结果
*/
double MulOperation::getResult()
{
    return this->numberA * this->numberB;
}