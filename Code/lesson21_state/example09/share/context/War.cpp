#include "../../include/context/War.h"

War::War()
{
    cout << "War()构造函数" << endl;
    this->days = 0;
    this->state = std::make_shared<ProphaseState>(); //默认战争初期
}

War::~War()
{
    cout << "~War()析构函数" << endl;
}

void War::setState(std::shared_ptr<IState> state)
{
    this->state = state;
}

void War::getState()
{
    this->state->getCurrentState(this);
}

void War::setDays(int days)
{
    this->days = days;
}

int War::getDays()
{
    return this->days;
}
