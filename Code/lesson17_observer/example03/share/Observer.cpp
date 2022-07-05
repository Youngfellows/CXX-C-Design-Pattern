#include "../include/Observer.h"

Observer::Observer(Subject *subject)
{
    cout << "Observer()构造函数" << endl;
    this->subject = subject;
    this->subject->attach(this);
}

Observer::~Observer()
{
    cout << "~Observer()析构函数" << endl;
}