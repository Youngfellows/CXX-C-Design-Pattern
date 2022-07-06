#include "../include/Observer.h"

Observer::Observer(std::shared_ptr<Subject> subject)
{
    cout << "Observer()构造函数" << endl;
    this->subject = subject;
    this->subject->registerObserver(this); //把观察者注册到被观察者
}

Observer::~Observer()
{
    cout << "~Observer()析构函数" << endl;
    this->subject->removeObserver(this);  //从观察者列表移除观察者
}