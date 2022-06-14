#ifndef MUL_OPERATION_H
#define MUL_OPERATION_H

#include "./Operation.h"

/**
 * @brief 派生类存放操作  - 实现相乘
 * 
 */
class MulOperation : public Operation
{
    public:
        MulOperation();
        ~MulOperation();

        /**
         * @brief 派生类具体实现
         * 
         * @return double 返回相乘结果
         */
        double getResult() override;
};
#endif