#include "../../include/expression/SubExpression.h"

SubExpression::SubExpression(std::shared_ptr<IExpression> lExpression, std::shared_ptr<IExpression> rExpression)
    : SymbolExpression(lExpression, rExpression)
{
    cout << "SubExpression()构造函数" << endl;
}

SubExpression::~SubExpression()
{
    cout << "~SubExpression()析构函数" << endl;
}

/**
 * @brief 加法解析器
 *
 * @param context 上下文环境
 * @return int
 */
int SubExpression::interprete(std::shared_ptr<IContext> context)
{
    return lExpression->interprete(context) - rExpression->interprete(context);
}