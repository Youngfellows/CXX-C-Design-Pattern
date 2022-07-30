#include "../../include/context/Context.h"

Context::Context()
{
    cout << "Context()无参数构造函数" << endl;
}

Context::Context(IState *state)
{
    cout << "Context()有参数构造函数" << endl;
    this->state = state;
}

Context::~Context()
{
    cout << "~Context()析构函数" << endl;
    //delete this->state;
    //this->state = nullptr;
}

void Context::setState(IState *state)
{
    this->state = state;
}

IState *Context::getState()
{
    return this->state;
}