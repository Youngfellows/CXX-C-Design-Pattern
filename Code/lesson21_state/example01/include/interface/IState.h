#ifndef ISTATE_H
#define ISTATE_H

#include "../Global.h"
#include "./IWorker.h"

//先声明类,后面定义
class IWorker;

/**
 * @brief 抽象接口: 工作状态抽象类
 *
 */
class IState
{
public:
    virtual ~IState() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 做某事
     * @param worker 工作者
     */
    virtual void doSomeThing(IWorker *worker) = 0;
};

#endif