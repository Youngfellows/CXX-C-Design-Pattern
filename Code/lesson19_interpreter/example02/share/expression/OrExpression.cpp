#include "../../include/expression/OrExpression.h"

OrExpression::OrExpression(std::shared_ptr<Expression> expression1, std::shared_ptr<Expression> expression2)
{
    cout << "OrExpression()构造函数" << endl;
    this->expression1 = expression1;
    this->expression2 = expression2;
}

OrExpression::~OrExpression()
{
    cout << "~OrExpression()析构函数" << endl;
}

/**
 * @brief 解释器1中的数据 或 解释器2 中的数据是否都纯正于上下文环境中
 *
 * @param context 上下文环境
 * @return true
 * @return false
 */
bool OrExpression::interpret(std::string context)
{
    return expression1->interpret(context) || expression2->interpret(context);
}