#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //中介者模式
    IMediator *mediator = new Mediator();//创建中介

    //创建3个消息发送对象
    IColleague *c1 = new CColleague(1001);
    IColleague *c2 = new CColleague(1002);
    IColleague *c3 = new CColleague(1003);

    //注册到中介
    mediator->registerColleague(c1);
    mediator->registerColleague(c2);
    mediator->registerColleague(c3);

    //发布消息给指定的对象
    c1->sendMsg(c2,"你好,很高兴认识你 ...");
    c2->sendMsg(c1,"下午好,我是大花猫 ...");

    c3->sendMsg(c1,"你好,我们可以交朋友吗?");
    c1->sendMsg(c3,"呀,有点太突然,我想想吧?");

    c2->sendMsg(c3,"晚上吃鱼呀 ..");
    c3->sendMsg(c2,"可以呀,去哪吃呢?");

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