#include "../../include/state/OvertimeState.h"

OvertimeState::OvertimeState()
{
    cout << "OvertimeState()构造函数" << endl;
}

OvertimeState::~OvertimeState()
{
    cout << "~OvertimeState()析构函数" << endl;
}

void OvertimeState::doAction(IWork *work)
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
        // cout << "在" << work->getHour() << "点时间,工作中 ..." << endl;
    }
    else if (work->getHour() < 21)
    {
        // work->setState(std::make_shared<OvertimeState>());
        // work->doSomeThing();
        cout << "在" << work->getHour() << "点时间,加班中 ..." << endl;
    }
    else
    {
        work->setState(std::make_shared<SleepingState>());
        work->doSomeThing();
        // cout << "在" << work->getHour() << "点时间,睡眠中 ...." << endl;
    }
}