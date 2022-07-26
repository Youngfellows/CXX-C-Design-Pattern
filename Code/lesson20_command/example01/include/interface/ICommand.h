#ifndef ICOMMAND_H
#define ICOMMAND_H

/**
 * @brief 抽象类: 命令抽象类
 *
 */
class ICommand
{
public:
    virtual ~ICommand() = default;

    /**
     * @brief 纯虚函数: 抽象接口
     * @brief 治疗
     */
    virtual void treat() = 0;
};

#endif