#ifndef OPERATION_MUL_H
#define OPERATION_MUL_H

#include "./Global.h"
#include "./Strategy.h"


/**
 * @brief 派生类: 算法的具体实现,乘法运算
 * 
 */
class OperationMultiply : public Strategy
{
    public:
        OperationMultiply() = default;
        ~OperationMultiply() = default;
        virtual double doOperation(double num1,double num2) override;//实现doOperation()函数
};

#endif