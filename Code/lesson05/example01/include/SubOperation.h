#ifndef SUB_OPERATION_H
#define SUB_OPERATION_H

#include "./Operation.h"

/**
 * @brief 派生类存放操作  - 实现相减
 * 
 */
class SubOperation : public Operation
{
    public:
        SubOperation();
        ~SubOperation();

        /**
         * @brief 派生类具体实现
         * 
         * @return double 返回相减结果
         */
        double getResult() override;
};
#endif