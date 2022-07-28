#include "../../include/state/WorkingState.h"

WorkingState::WorkingState()
{
    cout << "WorkingState()构造函数" << endl;
}

WorkingState::~WorkingState()
{
    cout << "~WorkingState()析构函数" << endl;
}

void WorkingState::doSomeThing(IWorker *worker)
{
    int hour = worker->getHour();
    if ((hour > 9) && (hour <= 12))
    {
        cout << "9~12点,工作 ..." << endl;
    }
    else
    {
        //状态2不满足要转到状态1
        std::shared_ptr<IState> state = std::make_shared<EatingState>();
        worker->setCurrentState(state);
        worker->getCurrentState()->doSomeThing(worker);
    }
}