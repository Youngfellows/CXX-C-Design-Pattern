#ifndef EXPRESSION_FACTORY_H
#define EXPRESSION_FACTORY_H

#include "./interface/IFactory.h"
#include "./expression/NoteExpression.h"
#include "./expression/ScaleExpression.h"
#include "./expression/SpeedExpression.h"

class ExpressionFactory : public IFactory
{
public:
    ExpressionFactory() = default;
    ~ExpressionFactory() = default;
    virtual std::shared_ptr<IExpression> create(std::shared_ptr<IContext> context) override; //实现create()函数
};
#endif