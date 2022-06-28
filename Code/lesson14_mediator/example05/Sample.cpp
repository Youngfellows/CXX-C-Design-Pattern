#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //中介者模式,通过中介发布消息
    Mediator *mediator = new ConcreteMediator();//创建中介

    //创建3个消息发布同仁
    Colleague *c1 = new ConcreteColleague(mediator,1001);
    Colleague *c2 = new ConcreteColleague(mediator,1002);
    Colleague *c3 = new ConcreteColleague(mediator,1003);

    //把消息发布同仁添加到中介
    mediator->add(c1);
    mediator->add(c2);
    mediator->add(c3);

    //c1发布消息
    c1->send("通知了,今天下午做核酸,大家下午可以不上班了 ...");

    //c2发布消息
    c2->send("请问在什么地方可以做核酸呢 ...");

    //c3发布消息
    c3->send("在门口的卓越大厦门口可以做核酸 ...");

    //释放内存
    delete mediator;

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