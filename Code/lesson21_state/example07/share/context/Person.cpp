#include "../../include/context/Person.h"

Person::Person()
{
    cout << "Person()构造函数" << endl;
    this->state = StandState::getInstance();
}

Person::~Person()
{
    cout << "~Person()析构函数" << endl;
    if (this->state != nullptr)
    {
        delete this->state;
        this->state = nullptr;
    }
}

void Person::onKeyDown()
{
    this->state->down(this);
}

void Person::onKeyUp()
{
    this->state->up(this);
}

void Person::moveOn()
{
    this->state->action(this);
}

void Person::setState(IState *state)
{
    this->state = state;
}