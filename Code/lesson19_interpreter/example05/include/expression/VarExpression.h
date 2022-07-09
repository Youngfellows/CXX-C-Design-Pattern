#ifndef VAR_EXPRESSION_H
#define VAR_EXPRESSION_H

#include "../interface/IExpression.h"

/**
 * @brief 变量表达式 - 解释器
 *
 */
class VarExpression : public IExpression
{
private:
    char key; //变量名

public:
    VarExpression(const char key);
    ~VarExpression();
    virtual int interprete(std::shared_ptr<IContext> context) override; //实现interprete()函数
};
#endif