#include "../include/Observer.h"

Observer::Observer(std::shared_ptr<Subject> subject)
{
    cout << "Observer()构造函数" << endl;
    this->subject = subject;
    std::shared_ptr<Observer> observer(this);  //将普通指针转化为智能指针传递出去
    this->subject->registerObserver(observer); //把观察者注册到被观察者
}

Observer::~Observer()
{
    cout << "~Observer()析构函数" << endl;
    std::shared_ptr<Observer> observer(this); //将普通指针转化为智能指针传递出去
    this->subject->removeObserver(observer);  //从观察者列表移除观察者
}