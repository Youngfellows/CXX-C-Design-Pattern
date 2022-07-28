#include "../../include/context/Worker.h"

Worker::Worker()
{
    cout << "Worker()构造函数" << endl;
    this->currentState = std::make_shared<EatingState>(); //默认是吃饭状态
}
Worker::~Worker()
{
    cout << "~Worker()析构函数" << endl;
}

void Worker::setHour(int hour)
{
    this->hour = hour;
}

int Worker::getHour()
{
    return this->hour;
}

void Worker::setCurrentState(std::shared_ptr<IState> state)
{
    this->currentState = state;
}

std::shared_ptr<IState> Worker::getCurrentState()
{
    return this->currentState;
}

/**
 * @brief 重要: 根据状态做某事
 *
 */
void Worker::doSomeThing()
{
    //std::shared_ptr<IWorker> worker(this); //普通指针转化为智能指针
    this->currentState->doSomeThing(this);
}
