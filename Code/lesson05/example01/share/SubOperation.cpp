#include "../include/SubOperation.h"

SubOperation::SubOperation()
{
    cout << "SubOperation()构造函数" << endl;
}

SubOperation::~SubOperation()
{
    cout << "~SubOperation()析构函数" << endl;
}

/**
* @brief 派生类具体实现
* 
* @return double 返回相减结果
*/
double SubOperation::getResult()
{
    return this->numberA - this->numberB;
}