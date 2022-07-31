#include "../../include/state/RestState.h"

RestState::RestState()
{
    cout << "RestState()构造函数" << endl;
}

RestState::~RestState()
{
    cout << "~RestState()析构函数" << endl;
}

void RestState::doAction(IWork *work)
{
    if (work->isFinished())
    {
        cout << "在" << work->getHour() << "点时间,休息中 ...." << endl;
    }
    else
    {
        if (work->getHour() < 17)
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
            work->setState(std::make_shared<SleepingState>());
            work->doSomeThing();
        }
    }
}
