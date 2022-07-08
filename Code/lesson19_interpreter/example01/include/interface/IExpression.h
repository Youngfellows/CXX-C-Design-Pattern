#ifndef IEXPRESSION_H
#define IEXPRESSION_H

#include "./IContext.h"

/**
 * @brief 抽象类: 解释器抽象类
 *
 */
class IExpression
{
public:
    IExpression() = default;
    virtual ~IExpression() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 解释上下文环境方法
     * 
     * @param context 上下文环境
     */
    virtual void interpreter(IContext *context) = 0;
};
#endif