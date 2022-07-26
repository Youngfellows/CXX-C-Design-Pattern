#ifndef INURSE_H
#define INURSE_H

#include "../Global.h"
#include "./ICommand.h"

/**
 * @brief 抽象类: 抽象护士类
 *
 */
class INurse
{
public:
    virtual ~INurse() = default;

    /**
     * @brief 纯虚函数: 抽象接口
     * @brief 设置命令
     *
     * @param command 要设置的命令
     */
    virtual void setCommand(std::shared_ptr<ICommand> command) = 0;

    /**
     * @brief 纯虚函数: 抽象接口
     * @brief 下达命令
     */
    virtual void submittedCase() = 0;
};

#endif