#ifndef SUB_EXPRESSION_H
#define SUB_EXPRESSION_H

#include "./SymbolExpression.h"

/**
 * @brief 减法运算
 *
 */
class SubExpression : public SymbolExpression
{
public:
    // using SymbolExpression::SymbolExpression;
    SubExpression(std::shared_ptr<IExpression> lExpression, std::shared_ptr<IExpression> rExpression);
    ~SubExpression();
    virtual int interprete(std::shared_ptr<IContext> context) override; //实现interprete()函数
};
#endif