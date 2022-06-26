#ifndef OPERATION_ADD_H
#define OPERATION_ADD_H

#include "./Global.h"
#include "./Strategy.h"


/**
 * @brief 派生类: 算法的具体实现,加法运算
 * 
 */
class OperationAdd : public Strategy
{
    public:
        OperationAdd() = default;
        ~OperationAdd() = default;
        virtual double doOperation(double num1,double num2) override;//实现doOperation()函数
};


#endif