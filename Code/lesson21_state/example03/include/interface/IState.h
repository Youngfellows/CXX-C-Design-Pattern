#ifndef ISTATE_H
#define ISTATE_H

#include "./IWork.h"

//先声明类,后面再定义
class IWork;

/**
 * @brief 抽象类: 状态抽象类
 *
 */
class IState
{
public:
    virtual ~IState() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 写程序
     * @param work 工作
     */
    virtual void doAction(IWork *work) = 0;
};

#endif