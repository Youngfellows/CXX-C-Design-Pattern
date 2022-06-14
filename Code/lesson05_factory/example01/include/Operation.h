#ifndef OPERATION_H
#define OPERATION_H

#include "./Global.h"

/**
 * @brief 抽象类: 基类存放数据  
 * 
 */
class Operation
{
    public:
        double numberA;//数据A
        double numberB;//数据B

    public:
        /**
         * @brief 析构函数
         * 
         */
        virtual ~Operation();

        /**
         * @brief 获取算数运算的结果
         * 
         * @return double 返回运算的结果
         */
        virtual double getResult() = 0;
};
#endif