#ifndef SUB_OPERATION_FACTORY_H
#define SUB_OPERATION_FACTORY_H

#include "./AbsOperationFactory.h"
#include "./SubOperation.h"

/**
 * @brief 具体工厂: 生产具体的Operation运算产品
 * 
 */
class SubFactory : public AbsOperationFactory
{
    public:
        SubFactory();
        ~SubFactory();
        Operation * create() override;
};
#endif