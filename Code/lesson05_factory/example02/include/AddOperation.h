#ifndef ADD_OPERATION_H
#define ADD_OPERATION_H

#include "./Operation.h"

/**
 * @brief 派生类存放操作  - 实现相加
 * 
 */
class AddOperation : public Operation
{
    public:
        AddOperation();
        ~AddOperation();

        /**
         * @brief 派生类具体实现
         * 
         * @return double 返回相加结果
         */
        double getResult() override;
};
#endif