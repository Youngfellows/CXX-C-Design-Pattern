#ifndef DIV_OPERATION_FACTORY_H
#define DIV_OPERATION_FACTORY_H

#include "./AbsOperationFactory.h"
#include "./DivOperation.h"

/**
 * @brief 具体工厂: 生产具体的Operation运算产品
 * 
 */
class DivFactory : public AbsOperationFactory
{
    public:
        DivFactory();
        ~DivFactory();
        Operation * create() override;
};
#endif