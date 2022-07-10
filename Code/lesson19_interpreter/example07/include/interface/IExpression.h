#ifndef IEXPRESSION_H
#define IEXPRESSION_H

#include "./IContext.h"

/**
 * @brief 抽象类: 抽象解释器类
 *
 */
class IExpression
{
public:
    virtual ~IExpression() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 解释上下文
     *
     * @param context 上下文环境
     */
    virtual void interprete(std::shared_ptr<IContext> context) = 0;
};

#endif