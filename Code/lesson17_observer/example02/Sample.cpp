#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //观察者模式
    Subject *subject = new ConcreteSubject();       //被观察者
    Observer *ob1 = new ConcreteObserverA(subject); //观察者a
    Observer *ob2 = new ConcreteObserverB(subject); //观察者b

    //再次使用注册到观察者
    subject->attach(ob1);

    //被观察者数据变化,通知观察者
    subject->setState("老师来了 ...");
    subject->notify(); //通知观察者

    subject->setState("台风来了 ...");
    subject->notify(); //通知观察者

    //移除观察者
    subject->detach(ob1);

    //被观察者数据变化,通知观察者
    subject->setState("老师走了 ...");
    subject->notify(); //通知观察者

    //移除观察者
    subject->detach(ob1);

    //被观察者数据变化,通知观察者
    subject->setState("开始下雪了 ...");
    subject->notify(); //通知观察者

    //释放内存
    delete subject;
    delete ob1;
    delete ob2;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}