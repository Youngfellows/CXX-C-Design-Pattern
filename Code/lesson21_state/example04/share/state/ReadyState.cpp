#include "../../include/state/ReadyState.h"

using namespace state;

ReadyState::ReadyState(IProcess *process, std::string name) : IState(name)
{
    cout << "ReadyState()构造函数" << endl;
    this->process = process;
}

ReadyState::~ReadyState()
{
    cout << "~ReadyState()析构函数" << endl;
}

void ReadyState::resumedByCpu()
{
    cout << "ReadyState::resumedByCpu():: " << process->getName() << " is now running ..." << endl;
    process->setState(process->getRunningState()); //设置下一个状态
}

void ReadyState::timeSlotEnd()
{
    throw ImpossibleException();
}

void ReadyState::needIO()
{
    throw ImpossibleException();
}

void ReadyState::finishIO()
{
    throw ImpossibleException();
}