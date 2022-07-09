#ifndef SYMBOL_EXPRESSION_H
#define SYMBOL_EXPRESSION_H

#include "../interface/IExpression.h"

/**
 * @brief 符号表达式
 *
 */
class SymbolExpression : public IExpression
{
protected:
    std::shared_ptr<IExpression> lExpression = nullptr; //左边表达式
    std::shared_ptr<IExpression> rExpression = nullptr; //右边表达式

public:
    SymbolExpression() = default;
    SymbolExpression(std::shared_ptr<IExpression> lExpression, std::shared_ptr<IExpression> rExpression);
    virtual ~SymbolExpression() = default;
};
#endif