#ifndef MINUS_EXPRESSION_H
#define MINUS_EXPRESSION_H

#include "../Global.h"
#include "../interface/IExpression.h"

/**
 * @brief 派生类: 自动减少解析器
 *
 */
class MinusExpression : public IExpression
{
public:
    MinusExpression();
    ~MinusExpression();
    virtual void interpreter(IContext *context) override; //实现interpreter()函数
};
#endif