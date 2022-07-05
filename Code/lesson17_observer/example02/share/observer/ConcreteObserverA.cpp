#include "../../include/observer/ConcreteObserverA.h"

ConcreteObserverA::ConcreteObserverA(Subject *subject) : Observer(subject)
{
    cout << "ConcreteObserverA()构造函数" << endl;
    this->state = '\0';
}

ConcreteObserverA::~ConcreteObserverA()
{
    cout << "~ConcreteObserverA()析构函数" << endl;
}

void ConcreteObserverA::update()
{
    cout << "ConcreteObserverA::update():: ..." << endl;
    this->state = this->subject->getState(); //获取被观察变化的数据
    this->printInfo();                       //打印数据
}

void ConcreteObserverA::printInfo()
{
    cout << "ConcreteObserverA::printInfo():: state:" << this->state << endl;
}