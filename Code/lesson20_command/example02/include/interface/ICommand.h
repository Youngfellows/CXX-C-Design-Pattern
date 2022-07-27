#ifndef ICOMMAND_H
#define ICOMMAND_H

/**
 * @brief 抽象类: 抽象命令类
 *
 */
class ICommand
{
public:
    virtual ~ICommand() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 卖东西
     */
    virtual void sail() = 0;
};
#endif