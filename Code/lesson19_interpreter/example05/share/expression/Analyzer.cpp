#include "../../include/expression/Analyzer.h"

Analyzer::Analyzer()
{
    cout << "Analyzer()构造函数" << endl;
}

Analyzer::~Analyzer()
{
    cout << "~Analyzer()析构函数" << endl;
}

std::shared_ptr<IExpression> Analyzer::analyse(std::string expStr)
{
    cout << "Analyzer::analyse():: expStr:" << expStr << endl;
    stack<std::shared_ptr<IExpression>> expStack;
    std::shared_ptr<IExpression> left = nullptr;
    std::shared_ptr<IExpression> right = nullptr;

    for (long unsigned int i = 0; i < expStr.size(); i++)
    {
        cout << "expStr[" << i << "]=" << expStr[i] << endl;
        switch (expStr[i])
        {
        case '+':
            // 加法运算
            left = expStack.top();
            right = std::make_shared<VarExpression>(expStr[++i]);
            expStack.push(std::make_shared<AddExpression>(left, right));
            break;
        case '-':
            // 减法运算
            left = expStack.top();
            right = std::make_shared<VarExpression>(expStr[++i]);
            expStack.push(std::make_shared<SubExpression>(left, right));
            break;
        default:
            // 变量表达式
            expStack.push(std::make_shared<VarExpression>(expStr[i]));
        }
    }
    std::shared_ptr<IExpression> expression = expStack.top();
    return expression;
}