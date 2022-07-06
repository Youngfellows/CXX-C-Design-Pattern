#include "../include/Subscriber.h"

Subscriber::Subscriber(std::shared_ptr<Publisher> subject)
{
    cout << "Subscriber()构造函数" << endl;
    this->subject = subject;
    this->subject->attach(this); //注册观察者到被观察者的观察者列表
}

Subscriber::~Subscriber()
{
    cout << "~Subscriber()析构函数" << endl;
    this->subject->detach(this);
}