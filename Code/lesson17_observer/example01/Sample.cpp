#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //观察者模式
    ISubject *subject = new Secretary("莉莉");               //创建被观察者
    IObserver *ob1 = new PlayserObserver("杨过,", subject);  //观察者1
    IObserver *ob2 = new PlayserObserver("小龙女", subject); //观察者1

    //注册观察者到被观察者
    subject->attach(ob1);
    subject->attach(ob2);

    //被观察者发布通知
    subject->notify("老师来了 ...");
    cout << endl;
    subject->notify("老师又走了 ...");

    //注销观察者1
    subject->detach(ob1);

    //发布消息
    subject->notify("天要下雨 ...");

    //释放内存
    delete ob1;
    delete ob2;
    delete subject;
    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //观察者模式,使用智能指针
    std::shared_ptr<ISubject> subject = std::make_shared<Secretary>("小蜜蜂");                   //被观察者
    std::shared_ptr<IObserver> ob1 = std::make_shared<PlayserObserver>("大幂幂", subject.get()); //观察者1,get()智能指针转化为普通指针
    std::shared_ptr<IObserver> ob2 = std::make_shared<PlayserObserver>("大黑牛", subject.get()); //观察者2,get()智能指针转化为普通指针

    //注册观察者到被观察者
    subject->attach(ob1.get());
    subject->attach(ob2.get());

    //被观察者发布通知
    subject->notify("老师来了 ...");
    cout << endl;
    subject->notify("老师又走了 ...");

    //注销观察者1
    subject->detach(ob1.get());

    //发布消息
    subject->notify("天要下雨 ...");

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //观察者模式,使用智能指针
    std::shared_ptr<ISubject> subject(new Secretary("敏敏"));                     //被观察者,普通指针转换为智能指针
    std::shared_ptr<IObserver> ob1(new PlayserObserver("张无忌", subject.get())); //观察者1,get()智能指针转化为普通指针
    std::shared_ptr<IObserver> ob2(new PlayserObserver("陈友谅", subject.get())); //观察者2,get()智能指针转化为普通指针

    //注册观察者到被观察者
    subject->attach(ob1.get());
    subject->attach(ob2.get());

    //被观察者发布通知
    subject->notify("老师来了 ...");
    cout << endl;
    subject->notify("老师又走了 ...");

    //注销观察者1
    subject->detach(ob1.get());

    //发布消息
    subject->notify("天要下雨 ...");
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}