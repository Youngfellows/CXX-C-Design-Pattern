#ifndef ICONTROLLER_H
#define ICONTROLLER_H

#include "../Global.h"
#include "./ICommand.h"

/**
 * @brief 抽象触发者: 抽象遥控器
 *
 */
class IController
{
public:
    virtual ~IController() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 为触发者设置命令
     *
     * @param command 要设置的命令
     */
    virtual void setCommand(std::shared_ptr<ICommand> command) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 执行命令
     *
     */
    virtual void executeCommand() = 0;
};

#endif