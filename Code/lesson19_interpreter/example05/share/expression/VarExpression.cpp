#include "../../include/expression/VarExpression.h"

VarExpression::VarExpression(const char key)
{
    cout << "VarExpression()构造函数" << endl;
    this->key = key;
}

VarExpression::~VarExpression()
{
    cout << "~VarExpression()析构函数" << endl;
}

int VarExpression::interprete(std::shared_ptr<IContext> context)
{
    return context->get(key);
}