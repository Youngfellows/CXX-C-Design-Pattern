#ifndef IWAITER_H
#define IWAITER_H

#include "./ICommand.h"

/**
 * @brief 抽象接口: 抽象服务员类
 *
 */
class IWaiter
{
public:
    virtual ~IWaiter() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 为服务员设置命令
     * @param command 要设置的命令
     */
    virtual void setCommand(std::shared_ptr<ICommand> command) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 上菜
     *
     */
    virtual void serve() = 0;
};

#endif