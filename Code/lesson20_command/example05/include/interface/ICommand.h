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
     * @brief 撤销
     */
    virtual void undo() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 恢复
     */
    virtual void redo() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 缩放
     */
    virtual void zooming(double fltScale) = 0;
};

#endif