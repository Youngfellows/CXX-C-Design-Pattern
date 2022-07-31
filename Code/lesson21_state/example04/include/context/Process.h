#ifndef PROCESS_H
#define PROCESS_H

#include "../interface/IProcess.h"
#include "../state/ReadyState.h"
#include "../state/RunningState.h"
#include "../state/BlockedState.h"

/**
 * @brief 上下文环境: 处理流程
 *
 */
class Process : public IProcess
{
private:
    std::string name;
    std::shared_ptr<IState> readyState;
    std::shared_ptr<IState> runningState;
    std::shared_ptr<IState> blockedState;
    std::shared_ptr<IState> curState;

public:
    Process(std::string name);
    ~Process();
    virtual std::string getName() override;                        //获取处理器名称
    virtual void setState(std::shared_ptr<IState> state) override; //设置状态
    virtual std::shared_ptr<IState> getReadyState() override;      //获取就绪状态
    virtual std::shared_ptr<IState> getRunningState() override;    //获取运行状态
    virtual std::shared_ptr<IState> getBlockedState() override;    //获取阻塞状态
    virtual void resumedByCpu() override;                          //由CPU恢复
    virtual void timeSlotEnd() override;                           //时间片结束
    virtual void needIO() override;                                //需要IO
    virtual void finishIO() override;                              // IO结束
};

#endif