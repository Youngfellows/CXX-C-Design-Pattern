#ifndef IWORK_H
#define IWORK_H

#include "../Global.h"
#include "./IState.h"

//先声明类,后面再定义
class IState;

/**
 * @brief 抽象类: 工作抽象类
 *
 */
class IWork
{

public:
    virtual ~IWork() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置状态
     * @param state 要设置的状态
     */
    virtual void setState(std::shared_ptr<IState> state) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 做某事
     *
     */
    virtual void doSomeThing() = 0;

    /**
     * @brief  纯虚函数,抽象接口
     * @brief 设置工作是否完成
     * @param finished 工作是否完成
     */
    virtual void setFinish(bool finished) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取工作是否完成
     * @return true
     * @return false
     */
    virtual bool isFinished() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置时间
     *
     * @param hour 时间
     */
    virtual void setHour(int hour) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     *
     * @return int 返回时间
     */
    virtual int getHour() = 0;
};

#endif