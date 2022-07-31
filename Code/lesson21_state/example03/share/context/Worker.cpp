#include "../../include/context/Worker.h"

Worker::Worker()
{
    cout << "Worker()无参数构造函数" << endl;
    this->state = std::make_shared<WorkingState>(); //默认是工作状态
}

Worker::Worker(std::shared_ptr<IState> state)
{
    cout << "Worker()有参数构造函数" << endl;
    this->state = state;
}

Worker::~Worker()
{
    cout << "~Worker()析构函数" << endl;
}

void Worker::setState(std::shared_ptr<IState> state)
{
    this->state = state;
}

void Worker::doSomeThing()
{
    this->state->doAction(this);
}

void Worker::setFinish(bool finish)
{
    this->finished = finish;
}

bool Worker::isFinished()
{
    return this->finished;
}

void Worker::setHour(int hour)
{
    this->hour = hour;
}

int Worker::getHour()
{
    return this->hour;
}
