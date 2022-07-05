#ifndef CONCRETE_OBSERVER_A_H
#define CONCRETE_OBSERVER_A_H

#include "../Observer.h"

/**
 * @brief 派生类: 观察者实现A
 *
 */
class ConcreteObserverA : public Observer
{
public:
    ConcreteObserverA(Subject *subject);
    ~ConcreteObserverA();
    virtual void update() override;    //实现update()函数
    virtual void printInfo() override; //实现printInfo()函数
};
#endif