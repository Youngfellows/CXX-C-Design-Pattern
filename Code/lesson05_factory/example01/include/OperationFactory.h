#ifndef OPERATION_FACTORY_H
#define OPERATION_FACTORY_H

#include "./AbsOperationFactory.h"
#include "./AddOperation.h"
#include "./SubOperation.h"
#include "./MulOperation.h"
#include "./DivOperation.h"

/**
 * @brief 具体工厂: 生产具体的Operation运算产品
 * 
 */
class OperationFactory : public AbsOperationFactory
{
    public:
        OperationFactory();
        ~OperationFactory();
        Operation * create(string type) override;
};
#endif