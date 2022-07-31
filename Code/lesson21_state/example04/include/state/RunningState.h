#ifndef RUNNING_STATE_H
#define RUNNING_STATE_H

#include "../interface/IState.h"
#include "../interface/IProcess.h"
#include "./ImpossibleException.h"

//先声明类,后面再定义
class IProcess;

class RunningState : public IState
{
private:
    IProcess *process; //处理器上下文

public:
    RunningState(IProcess *process, std::string name);
    ~RunningState();
    virtual void resumedByCpu() override;
    virtual void timeSlotEnd() override;
    virtual void needIO() override;
    virtual void finishIO() override;
};

#endif