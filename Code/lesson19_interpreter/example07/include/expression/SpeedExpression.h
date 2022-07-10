#ifndef SPEED_EXPRESSION_H
#define SPEED_EXPRESSION_H

#include "./Expression.h"

/**
 * @brief 播放速度解析器
 *
 */
class SpeedExpression : public Expression
{
private:
public:
    SpeedExpression();
    ~SpeedExpression();

protected:
    virtual void excute(const std::string &key, const std::string &value) override; //实现excute()函数
};
#endif