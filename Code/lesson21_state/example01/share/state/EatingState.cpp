#include "../../include/state/EatingState.h"
EatingState::EatingState()
{
    cout << "EatingState()构造函数" << endl;
}

EatingState::~EatingState()
{
    cout << "~EatingState()析构函数" << endl;
}

void EatingState::doSomeThing(IWorker *worker)
{
    int hour = worker->getHour();
    if (hour >= 6 && hour <= 8)
    {
        cout << "早上6~8点,吃早饭 ..." << endl;
    }
    else
    {
        //状态1不满足要转到状态2
        std::shared_ptr<IState> state = std::make_shared<WorkingState>();
        worker->setCurrentState(state);
        worker->getCurrentState()->doSomeThing(worker);
    }
}