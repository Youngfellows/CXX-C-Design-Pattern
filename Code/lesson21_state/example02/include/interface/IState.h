#ifndef ISTATE_H
#define ISTATE_H

#include "../Global.h"
#include "./IContext.h"

//先声明类,后面再定义
class IContext;

/**
 * @brief 抽象接口: 状态抽象类
 *
 */
class IState
{
public:
    virtual ~IState() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 做某事
     * @param context 上下文环境
     */
    virtual void doAction(std::shared_ptr<IContext> context) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 打印当前状态
     *
     * @return std::string
     */
    virtual std::string toString() = 0;
};
#endif