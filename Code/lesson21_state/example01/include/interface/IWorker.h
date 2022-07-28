#ifndef IWORKER_H
#define IWORKER_H

#include "./IState.h"

//先声明类,后面再定义
class IState;

/**
 * @brief 抽象类: 抽象工作者类
 *
 */
class IWorker
{
public:
    virtual ~IWorker() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置时间,改变状态
     * @param hour 时间
     */
    virtual void setHour(int hour) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取设置的时间
     * @return int 返回设置的时间
     */
    virtual int getHour() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置当前的状态
     * @param state 要设置的当前状态
     */
    virtual void setCurrentState(std::shared_ptr<IState> state) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 返回当前的状态
     * @return std::shared_ptr<IState>
     */
    virtual std::shared_ptr<IState> getCurrentState() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 重要: 根据状态做某事
     *
     */
    virtual void doSomeThing() = 0;
};

#endif