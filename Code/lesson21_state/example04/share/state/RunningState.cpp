#include "../../include/state/RunningState.h"

RunningState::RunningState(IProcess *process, std::string name) : IState(name)
{
    cout << "RunningState()构造函数" << endl;
    this->process = process;
}

RunningState::~RunningState()
{
    cout << "~RunningState()析构函数" << endl;
}

void RunningState::resumedByCpu()
{
    throw ImpossibleException();
}

void RunningState::timeSlotEnd()
{
    cout << "RunningState::timeSlotEnd():: " << process->getName() << " is now ready" << endl;
    process->setState(process->getReadyState()); //设置下一个状态
}

void RunningState::needIO()
{
    cout << "RunningState::needIO():: " << process->getName() << " is now blocked" << endl;
    process->setState(process->getBlockedState()); ////设置下一个状态
}

void RunningState::finishIO()
{
    throw ImpossibleException();
}