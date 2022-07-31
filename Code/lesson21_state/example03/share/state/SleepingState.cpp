#include "../../include/state/SleepingState.h"

SleepingState::SleepingState()
{
    cout << "SleepingState()构造函数" << endl;
}

SleepingState::~SleepingState()
{
    cout << "~SleepingState()析构函数" << endl;
}

void SleepingState::doAction(IWork *work)
{
    if (work->isFinished())
    {
        work->setState(std::make_shared<RestState>());
        work->doSomeThing();
    }
    else if (work->getHour() < 17)
    {
        work->setState(std::make_shared<WorkingState>());
        work->doSomeThing();
    }
    else if (work->getHour() < 21)
    {
        work->setState(std::make_shared<OvertimeState>());
        work->doSomeThing();
    }
    else
    {
        // work->setState(std::make_shared<SleepingState>());
        // work->doSomeThing();
        cout << "在" << work->getHour() << "点时间,睡眠中 ...." << endl;
    }
}