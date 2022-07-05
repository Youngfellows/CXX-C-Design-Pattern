#include "../include/Observer.h"

Observer::Observer(Subject *subject)
{
    cout << "Observer()构造函数" << endl;
    this->subject = subject;
    this->subject->attach(this); //注册到被观察者
}

Observer::~Observer()
{
    cout << "~Observer()析构函数" << endl;
}