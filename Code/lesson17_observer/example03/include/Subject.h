#ifndef SUBJECT_H
#define SUBJECT_H

#include "./Global.h"
#include "./Observer.h"

//先声明类,后面再定义
class Observer;

/**
 * @brief 抽象类: 抽象被观察者
 *
 */
class Subject
{
private:
    std::list<Observer *> *observers = nullptr; //观察者列表

public:
    Subject();
    virtual ~Subject();
    virtual void attach(Observer *observer);
    virtual void detach(Observer *Observer);
    virtual void notify();
    virtual void setState(State state) = 0;
    virtual State getState() = 0;
};
#endif