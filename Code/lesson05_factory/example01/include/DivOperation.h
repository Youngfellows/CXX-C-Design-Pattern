#ifndef DIV_OPERATION_H
#define DIV_OPERATION_H

#include "./Operation.h"

/**
 * @brief 派生类存放操作  - 实现相除
 * 
 */
class DivOperation : public Operation
{
    public:
        DivOperation();
        ~DivOperation();

        /**
         * @brief 派生类具体实现
         * 
         * @return double 返回相除结果
         */
        double getResult() override;
};
#endif