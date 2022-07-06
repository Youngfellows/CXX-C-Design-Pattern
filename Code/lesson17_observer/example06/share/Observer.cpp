#include "../include/Observer.h"

Observer::Observer(std::shared_ptr<Subject> subject)
{
    cout << "Observer()构造函数" << endl;
    this->subject = subject;
    this->subject->addObserver(this);
}

Observer::~Observer()
{
    cout << "~Observer()" << endl;
    this->subject->deleteObserver(this);
}
