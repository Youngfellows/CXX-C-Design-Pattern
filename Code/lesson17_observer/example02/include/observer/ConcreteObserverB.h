#ifndef CONCRETE_OBSERVER_B_H
#define CONCRETE_OBSERVER_B_H

#include "../Observer.h"

/**
 * @brief 派生类: 观察者实现B
 *
 */
class ConcreteObserverB : public Observer
{
public:
    ConcreteObserverB(Subject *subject);
    ~ConcreteObserverB();
    virtual void update() override;    //实现update()函数
    virtual void printInfo() override; //实现printInfo()函数
};
#endif