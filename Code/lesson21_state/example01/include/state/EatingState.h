#ifndef EATING_STATE_H
#define EATING_STATE_H

#include "../interface/IState.h"
#include "./WorkingState.h"

//先声明类,后面再定义
class WorkingState;

/**
 * @brief 派生类: 吃饭状态
 *
 */
class EatingState : public IState
{
public:
    EatingState();
    ~EatingState();
    virtual void doSomeThing(IWorker *worker) override; //实现doSomeThing()函数
};
#endif