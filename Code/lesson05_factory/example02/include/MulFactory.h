#ifndef MUL_OPERATION_FACTORY_H
#define MUL_OPERATION_FACTORY_H

#include "./AbsOperationFactory.h"
#include "./MulOperation.h"

/**
 * @brief 具体工厂: 生产具体的Operation运算产品
 * 
 */
class MulFactory : public AbsOperationFactory
{
    public:
        MulFactory();
        ~MulFactory();
        Operation * create() override;
};
#endif