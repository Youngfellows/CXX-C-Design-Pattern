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

protected:
    Subject();

public:
    virtual ~Subject();
    virtual void attach(Observer *observer); //注册观察者
    virtual void detach(Observer *observer); //注销观察者
    virtual void notify();                   //通知所有观察者
    virtual void setState(State state) = 0;  //设置被观察的数据
    virtual State getState() = 0;            //获取被观察的数据
};
#endif