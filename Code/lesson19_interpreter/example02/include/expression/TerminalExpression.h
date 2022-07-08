#ifndef TERMINAL_EXPRESSION_H
#define TERMINAL_EXPRESSION_H

#include "../interface/Expression.h"

/**
 * @brief 派生类: 终端解释器
 *
 */
class TerminalExpression : public Expression
{
private:
    std::string data; //数据

public:
    TerminalExpression(std::string data);
    ~TerminalExpression();
    virtual bool interpret(std::string context) override; //实现interpret()函数
};
#endif