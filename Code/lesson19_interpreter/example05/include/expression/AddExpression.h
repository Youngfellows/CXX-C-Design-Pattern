#ifndef ADD_EXPRESSION_H
#define ADD_EXPRESSION_H

#include "./SymbolExpression.h"

/**
 * @brief 加法运算
 *
 */
class AddExpression : public SymbolExpression
{
public:
    // using SymbolExpression::SymbolExpression;
    AddExpression(std::shared_ptr<IExpression> lExpression, std::shared_ptr<IExpression> rExpression);
    ~AddExpression();
    virtual int interprete(std::shared_ptr<IContext> context) override; //实现interprete()函数
};
#endif