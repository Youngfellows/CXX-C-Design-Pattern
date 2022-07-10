#ifndef SCALE_EXPRESSION_H
#define SCALE_EXPRESSION_H

#include "./Expression.h"

/**
 * @brief 放大解析器
 *
 */
class ScaleExpression : public Expression
{
private:
public:
    ScaleExpression();
    ~ScaleExpression();

protected:
    virtual void excute(const std::string &key, const std::string &value) override; //实现excute()函数
};
#endif