#include "../../include/expression/AddExpression.h"

AddExpression::AddExpression(std::shared_ptr<IExpression> lExpression, std::shared_ptr<IExpression> rExpression)
    : SymbolExpression(lExpression, rExpression)
{
    cout << "AddExpression()构造函数" << endl;
}

AddExpression::~AddExpression()
{
    cout << "~AddExpression()析构函数" << endl;
}

/**
 * @brief 加法解析器
 *
 * @param context 上下文环境
 * @return int
 */
int AddExpression::interprete(std::shared_ptr<IContext> context)
{
    return lExpression->interprete(context) + rExpression->interprete(context);
}