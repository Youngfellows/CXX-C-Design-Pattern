#ifndef OR_EXPRESSION_H
#define OR_EXPRESSION_H

#include "../Global.h"
#include "../interface/Expression.h"

/**
 * @brief 派生类: 与运算解释器
 *
 */
class OrExpression : public Expression
{
private:
    std::shared_ptr<Expression> expression1 = nullptr; //解释器1
    std::shared_ptr<Expression> expression2 = nullptr; //解释器2

public:
    OrExpression(std::shared_ptr<Expression> expression1, std::shared_ptr<Expression> expression2);
    ~OrExpression();
    virtual bool interpret(std::string context) override; //实现interpret()函数
};
#endif