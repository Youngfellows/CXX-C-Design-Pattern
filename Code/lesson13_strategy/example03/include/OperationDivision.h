#ifndef OPERATION_DIV_H
#define OPERATION_DIV_H

#include "./Global.h"
#include "./Strategy.h"


/**
 * @brief 派生类: 算法的具体实现,除法运算
 * 
 */
class OperationDivision : public Strategy
{
    public:
        OperationDivision() = default;
        ~OperationDivision() = default;
        virtual double doOperation(double num1,double num2) override;//实现doOperation()函数
};
#endif