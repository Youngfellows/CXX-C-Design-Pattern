#ifndef PUBLISHER_H
#define PUBLISHER_H

#include "./Global.h"
#include "./Subscriber.h"

//先声明类,后面再定义
class Subscriber;

/**
 * @brief 抽象类: 被观察者抽象类,消息发布者抽象类
 *
 */
class Publisher
{
protected:
    std::vector<Subscriber *> *observers = nullptr; //观察者列表

public:
    Publisher();
    virtual ~Publisher();
    void attach(Subscriber *observer); //注册观察者
    void detach(Subscriber *observer); //注销观察者
    void notifyObservers();            //数据变化,通知所有的观察者
};
#endif