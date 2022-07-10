#ifndef FACTORY_H
#define FACTORY_H

#include "../Global.h"
#include "./IExpression.h"

/**
 * @brief 简单工厂方法
 *
 */
class IFactory
{
public:
    virtual ~IFactory() = default;
    virtual std::shared_ptr<IExpression> create(std::shared_ptr<IContext> context) = 0;
};

#endif