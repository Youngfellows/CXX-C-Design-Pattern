#ifndef ANALYZER_H
#define ANALYZER_H

#include "./VarExpression.h"
#include "./AddExpression.h"
#include "./SubExpression.h"

/**
 * @brief 分析表达式
 *
 */
class Analyzer
{
private:
public:
    Analyzer();
    ~Analyzer();
    std::shared_ptr<IExpression> analyse(std::string expStr);
};
#endif