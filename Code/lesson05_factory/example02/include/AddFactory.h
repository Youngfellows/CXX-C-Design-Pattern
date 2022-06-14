#ifndef ADD_OPERATION_FACTORY_H
#define ADD_OPERATION_FACTORY_H

#include "./AbsOperationFactory.h"
#include "./AddOperation.h"

/**
 * @brief 具体工厂: 生产具体的Operation运算产品
 * 
 */
class AddFactory : public AbsOperationFactory
{
    public:
        AddFactory();
        ~AddFactory();
        Operation * create() override;
};
#endif