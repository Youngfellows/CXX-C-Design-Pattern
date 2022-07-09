#include "../../include/expression/OrExpression.h"

OrExpression::OrExpression(std::shared_ptr<IExpression> lExpression, std::shared_ptr<IExpression> rExpression)
{
    cout << "OrExpression()构造函数" << endl;
    this->lExpression = lExpression;
    this->rExpression = rExpression;
}

OrExpression::~OrExpression()
{
    cout << "~OrExpression()析构函数" << endl;
}

bool OrExpression::interprete(std::shared_ptr<IContext> context)
{
    return this->lExpression->interprete(context) || this->rExpression->interprete(context);
}