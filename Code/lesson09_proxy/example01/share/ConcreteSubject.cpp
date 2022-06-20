#include "../include/ConcreteSubject.h"

ConcreteSubject::ConcreteSubject()
{
    cout << "ConcreteSubject()构造函数" << endl;
}

ConcreteSubject::~ConcreteSubject()
{
    cout << "~ConcreteSubject()析构函数" << endl;
}

void ConcreteSubject::request()
{
    cout << "ConcreteSubject::request():: 真实主题的请求 ..." << endl;
}