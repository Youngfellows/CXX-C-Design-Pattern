#ifndef WORKING_STATE_H
#define WORKING_STATE_H

#include "../interface/IState.h"
#include "./EatingState.h"

//先声明类,后面再定义
class EatingState;

/**
 * @brief 派生类: 工作状态
 *
 */
class WorkingState : public IState
{
public:
    WorkingState();
    ~WorkingState();
    virtual void doSomeThing(IWorker *worker) override; //实现doSomeThing()函数
};
#endif