#include "../../include/subject/ConcreteSubject.h"

ConcreteSubject::ConcreteSubject()
{
    cout << "ConcreteSubject()构造函数" << endl;
    this->state = '\0';
}

ConcreteSubject::~ConcreteSubject()
{
    cout << "~ConcreteSubject()析构函数" << endl;
    this->state = '\0';
}

/**
 * @brief 设置被观察的数据
 *
 * @param state 被观察的数据
 */
void ConcreteSubject::setState(State state)
{
    cout << "ConcreteSubject::setState():: state=" << state << endl;
    this->state = state;
}

/**
 * @brief 获取被观察的数据
 *
 * @return State 返回被观察的数据
 */
State ConcreteSubject::getState()
{
    return this->state;
}