#ifndef ISHOP_ASSISTANT_H
#define ISHOP_ASSISTANT_H

#include "../Global.h"
#include "./ICommand.h"

/**
 * @brief 抽象类: 售货员抽象类
 *
 */
class IShopAssistant
{
public:
    virtual ~IShopAssistant() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置命令
     *
     * @param command 要设置的命令
     */
    virtual void setCommand(std::shared_ptr<ICommand> command) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 卖东西
     */
    virtual void sail() = 0;
};

#endif