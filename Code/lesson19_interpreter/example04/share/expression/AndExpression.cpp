#include "../../include/expression/AndExpression.h"

AndExpression::AndExpression(std::shared_ptr<IExpression> lExpression, std::shared_ptr<IExpression> rExpression)
{
    cout << "AndExpression()构造函数" << endl;
    this->lExpression = lExpression;
    this->rExpression = rExpression;
}

AndExpression::~AndExpression()
{
    cout << "~AndExpression()析构函数" << endl;
}

bool AndExpression::interprete(std::shared_ptr<IContext> context)
{
    return this->lExpression->interprete(context) && this->rExpression->interprete(context);
}