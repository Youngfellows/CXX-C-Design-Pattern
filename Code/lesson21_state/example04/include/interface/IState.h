#ifndef ISTATE_H
#define ISTATE_H

#include "../Global.h"

/**
 * @brief 抽象类: 抽象状态接口
 *
 */
class IState
{
private:
    std::string name; //状态名称

public:
    IState(std::string name);
    virtual ~IState() = default;
    std::string getName();

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 由CPU恢复
     */
    virtual void resumedByCpu() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 时间片结束
     */
    virtual void timeSlotEnd() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 需要IO
     */
    virtual void needIO() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 结束IO
     */
    virtual void finishIO() = 0;
};

#endif