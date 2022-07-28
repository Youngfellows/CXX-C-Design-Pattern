#ifndef WORKER_H
#define WORKER_H

#include "../interface/IWorker.h"
#include "../state/EatingState.h"

/**
 * @brief 派生类: 具体工作者
 *
 */
class Worker : public IWorker
{
private:
    int hour;                             //时间
    std::shared_ptr<IState> currentState; //当前状态

public:
    Worker();
    ~Worker();
    virtual void setHour(int hour) override;
    virtual int getHour() override;
    virtual void setCurrentState(std::shared_ptr<IState> state) override;
    virtual std::shared_ptr<IState> getCurrentState() override;
    virtual void doSomeThing() override;
};
#endif