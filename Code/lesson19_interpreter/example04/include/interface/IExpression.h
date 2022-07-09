#ifndef IEXPRESSION_H
#define IEXPRESSION_H

#include "./IContext.h"
#include "../Global.h"

/**
 * @brief 抽象解释器类
 *
 */
class IExpression
{
public:
    virtual ~IExpression() = default;

    /**
     * @brief 纯虚函数,抽象结果
     * @brief 解析
     *
     * @param context 上下文环境
     * @return true
     * @return false
     */
    virtual bool interprete(std::shared_ptr<IContext> context) = 0;
};

#endif