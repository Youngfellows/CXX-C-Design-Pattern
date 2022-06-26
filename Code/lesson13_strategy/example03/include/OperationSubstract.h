#ifndef OPERATION_SUB_H
#define OPERATION_SUB_H

#include "./Global.h"
#include "./Strategy.h"


/**
 * @brief 派生类: 算法的具体实现,减法运算
 * 
 */
class OperationSubstract : public Strategy
{
    public:
        OperationSubstract() = default;
        ~OperationSubstract() = default;
        virtual double doOperation(double num1,double num2) override;//实现doOperation()函数
};

#endif