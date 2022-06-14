#include "../include/AddOperation.h"

AddOperation::AddOperation()
{
    cout << "AddOperation()构造函数" << endl;
}

AddOperation::~AddOperation()
{
    cout << "~AddOperation()析构函数" << endl;
}

/**
* @brief 派生类具体实现
* 
* @return double 返回相加结果
*/
double AddOperation::getResult()
{
    return this->numberA + this->numberB;
}