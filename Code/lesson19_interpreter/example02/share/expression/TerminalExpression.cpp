#include "../../include/expression/TerminalExpression.h"

TerminalExpression::TerminalExpression(std::string data)
{
    cout << "TerminalExpression()构造函数" << endl;
    this->data = data;
}

TerminalExpression::~TerminalExpression()
{
    cout << "~TerminalExpression()析构函数" << endl;
}

/**
 * @brief 查找data字符串是否存在于context上下文环境中
 *
 * @param context 上下文环境
 * @return true data字符串存在于context上下文环境中
 * @return false data字符串不存在于context上下文环境中
 */
bool TerminalExpression::interpret(std::string context)
{
    std::string::size_type index = context.find(data);
    return ((index == std::string::npos) ? false : true);
}