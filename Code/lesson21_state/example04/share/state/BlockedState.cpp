#include "../../include/state/BlockedState.h"

using namespace state;

BlockedState::BlockedState(IProcess *process, std::string name) : IState(name)
{
    cout << "BlockedState()构造函数" << endl;
    this->process = process;
}

BlockedState::~BlockedState()
{
    cout << "~BlockedState()析构函数" << endl;
}

void BlockedState::resumedByCpu()
{
    throw ImpossibleException();
}

void BlockedState::timeSlotEnd()
{
    throw ImpossibleException();
}

void BlockedState::needIO()
{
    cout << "BlockedState::needIO():: " << process->getName() << " is now ready" << endl;
    process->setState(process->getReadyState());
}

void BlockedState::finishIO()
{
    throw ImpossibleException();
}