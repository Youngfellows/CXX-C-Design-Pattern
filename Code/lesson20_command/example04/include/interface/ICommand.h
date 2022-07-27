#ifndef ICOMMAND_H
#define ICOMMAND_H

/**
 * @brief 抽象类: 抽象命令类接口
 *
 */
class ICommand
{
public:
    virtual ~ICommand() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 执行命令
     */
    virtual void execute() = 0;
};

#endif