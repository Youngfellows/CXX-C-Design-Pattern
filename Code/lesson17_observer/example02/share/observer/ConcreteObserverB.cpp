#include "../../include/observer/ConcreteObserverB.h"

ConcreteObserverB::ConcreteObserverB(Subject *subject) : Observer(subject)
{
    cout << "ConcreteObserverB()构造函数" << endl;
    this->state = '\0';
}

ConcreteObserverB::~ConcreteObserverB()
{
    cout << "~ConcreteObserverB()析构函数" << endl;
}

void ConcreteObserverB::update()
{
    cout << "ConcreteObserverB::update():: ..." << endl;
    this->state = this->subject->getState(); //获取被观察变化的数据
    this->printInfo();                       //打印数据
}

void ConcreteObserverB::printInfo()
{
    cout << "ConcreteObserverB::printInfo():: state:" << this->state << endl;
}