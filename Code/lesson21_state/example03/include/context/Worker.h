#ifndef WORKER_H
#define WORKER_H

#include "../interface/IWork.h"
#include "../state/WorkingState.h"

/**
 * @brief 派生类: 工作者
 *
 */
class Worker : public IWork
{
private:
    std::shared_ptr<IState> state; //当前状态
    bool finished;                 //是否完成工作
    int hour;                      //时间

public:
    Worker();
    Worker(std::shared_ptr<IState> state);
    ~Worker();
    virtual void setState(std::shared_ptr<IState> state) override;
    virtual void doSomeThing() override;
    virtual void setFinish(bool finished) override;
    virtual bool isFinished() override;
    virtual void setHour(int hour) override;
    virtual int getHour() override;
};
#endif