#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //中介者模式
    IMediator *mediator = new TencentQQ();           //创建中介
    IColleague *monitor = new Monitor("杨过");       //班长
    IColleague *secretary = new Secretary("小龙女"); //团支书
    IColleague *stuA = new StudentA("谢晓峰");       //学生A
    IColleague *stuB = new StudentB("慕容秋荻");     //学生B

    //注册消息发布者到中介
    mediator->registerColleague(monitor);
    mediator->registerColleague(secretary);
    mediator->registerColleague(stuA);
    mediator->registerColleague(stuB);

    //班长发布消息
    monitor->setContent("通知,今天晚自习不上啦 ...");
    mediator->notify(monitor);
    cout << endl;

    //团支书发布消息
    secretary->setContent("明天体育课到操场集合 ...");
    mediator->notify(secretary);
    cout << endl;

    //学生A发布消息
    stuA->setContent("我肚子痛,想要请一天假 ...");
    mediator->notify(stuA);
    cout << endl;

    //学生A发布消息
    stuB->setContent("请问计算机教学楼怎么走 ...");
    mediator->notify(stuB);
    cout << endl;

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