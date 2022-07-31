#include "../../include/context/Process.h"

Process::Process(std::string name)
{
    cout << "Process()构造函数" << endl;
    this->name = name;
    this->readyState = std::make_shared<ReadyState>(this, "Ready");
    this->runningState = std::make_shared<RunningState>(this, "Running");
    this->blockedState = std::make_shared<BlockedState>(this, "Blocked");
    this->curState = readyState;
}

Process::~Process()
{
    cout << "~Process()析构函数" << endl;
}

std::string Process::getName()
{
    return this->name;
}

void Process::setState(std::shared_ptr<IState> state)
{
    this->curState = state;
}

std::shared_ptr<IState> Process::getReadyState()
{
    return this->readyState;
}

std::shared_ptr<IState> Process::getRunningState()
{
    return this->runningState;
}

std::shared_ptr<IState> Process::getBlockedState()
{
    return this->blockedState;
}

void Process::resumedByCpu()
{
    std::shared_ptr<IState> oldState = this->curState;
    cout << "Process::resumedByCpu():: 由CPU进行恢复事件 ..." << endl;
    std::shared_ptr<IState> state = this->curState;
    state->resumedByCpu();
    cout << oldState->getName() << "->" << this->curState->getName() << endl
         << endl;
}

void Process::timeSlotEnd()
{
    std::shared_ptr<IState> oldState = this->curState;
    cout << "Process::timeSlotEnd():: 时间片结束事件 ..." << endl;
    std::shared_ptr<IState> state = this->curState;
    state->timeSlotEnd();
    cout << oldState->getName() << "->" << this->curState->getName() << endl
         << endl;
}

void Process::needIO()
{
    std::shared_ptr<IState> oldState = this->curState;
    cout << "Process::needIO():: 需要IO事件 ..." << endl;
    std::shared_ptr<IState> state = this->curState;
    state->needIO();
    cout << oldState->getName() << "->" << this->curState->getName() << endl
         << endl;
}

void Process::finishIO()
{
    std::shared_ptr<IState> oldState = this->curState;
    cout << "Process::finishIO():: 结束IO事件 ..." << endl;
    std::shared_ptr<IState> state = this->curState;
    state->finishIO();
    cout << oldState->getName() << "->" << this->curState->getName() << endl
         << endl;
}