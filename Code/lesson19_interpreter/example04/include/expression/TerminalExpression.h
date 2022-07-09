#ifndef TERMINAL_EXPRESSION_H
#define TERMINAL_EXPRESSION_H

#include "../interface/IExpression.h"

/**
 * @brief 终结解释器
 *
 */
class TerminalExpression : public IExpression
{
private:
    std::string data; //数据

public:
    TerminalExpression(const std::string data);
    ~TerminalExpression();
    virtual bool interprete(std::shared_ptr<IContext> context) override;
};
#endif