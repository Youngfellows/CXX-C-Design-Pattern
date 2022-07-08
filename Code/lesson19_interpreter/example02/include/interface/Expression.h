#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "../Global.h"

/**
 * @brief 抽象类: 解释器抽象类
 *
 */
class Expression
{
public:
    virtual ~Expression() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 解释上下文
     *
     * @param context 上下文环境
     * @return true
     * @return false
     */
    virtual bool interpret(std::string context) = 0;
};

#endif