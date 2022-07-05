#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //观察者模式
    Subject *subject = new ConcreteSubject();    //被观察者
    Observer *ob1 = new BinaryObserver(subject); //观察者1
    Observer *ob2 = new OctalObserver(subject);  //观察者2
    Observer *ob3 = new HexaObserver(subject);   //观察者3

    //在一次注册观察者
    subject->attach(ob2);

    //被观察者数据变化,通知各个观察者
    subject->setState(15);
    subject->notify();

    //移除观察者
    subject->detach(ob2);

    //被观察者数据变化,通知各个观察者
    subject->setState(3);
    subject->notify();

    //释放内存
    delete ob1;
    delete ob2;
    delete ob3;
    delete subject;

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