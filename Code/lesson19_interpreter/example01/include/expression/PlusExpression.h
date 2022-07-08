#ifndef PLUS_EXPRESSION_H
#define PLUS_EXPRESSION_H

#include "../Global.h"
#include "../interface/IExpression.h"

/**
 * @brief 派生类: 自动增加解析器
 *
 */
class PlusExpression : public IExpression
{
public:
    PlusExpression();
    ~PlusExpression();
    virtual void interpreter(IContext *context) override; //实现interpreter()函数
};
#endif