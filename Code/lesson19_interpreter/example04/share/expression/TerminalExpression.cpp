#include "../../include/expression/TerminalExpression.h"

TerminalExpression::TerminalExpression(const std::string data)
{
    cout << "TerminalExpression()构造函数" << endl;
    this->data = data;
}

TerminalExpression::~TerminalExpression()
{
    cout << "~TerminalExpression()析构函数" << endl;
}

bool TerminalExpression::interprete(std::shared_ptr<IContext> context)
{
    return context->get(data);
}