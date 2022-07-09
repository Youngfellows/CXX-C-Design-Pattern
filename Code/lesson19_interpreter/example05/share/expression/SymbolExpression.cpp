#include "../../include/expression/SymbolExpression.h"

SymbolExpression::SymbolExpression(std::shared_ptr<IExpression> lExpression, std::shared_ptr<IExpression> rExpression)
{
    cout << "SymbolExpression()构造函数" << endl;
    this->lExpression = lExpression;
    this->rExpression = rExpression;
}
