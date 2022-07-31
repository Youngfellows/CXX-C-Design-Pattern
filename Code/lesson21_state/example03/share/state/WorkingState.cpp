#include "../../include/state/WorkingState.h"

WorkingState::WorkingState()
{
    cout << "WorkingState()构造函数" << endl;
}

WorkingState::~WorkingState()
{
    cout << "~WorkingState()析构函数" << endl;
}

void WorkingState::doAction(IWork *work)
{
    if (work->isFinished())
    {
        work->setState(std::make_shared<RestState>());
        work->doSomeThing();
    }
    else if (work->getHour() < 17)
    {
        // work->setState(std::make_shared<WorkingState>());
        // work->doSomeThing();
        cout << "在" << work->getHour() << "点时间,工作中 ..." << endl;
    }
    else if (work->getHour() < 21)
    {
        work->setState(std::make_shared<OvertimeState>());
        work->doSomeThing();
    }
    else
    {
        work->setState(std::make_shared<SleepingState>());
        work->doSomeThing();
        // cout << "在" << work->getHour() << "点时间,睡眠中 ...." << endl;
    }
}