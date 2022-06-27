#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //中介模式,使用中介实现两个同事之前通讯
    std::shared_ptr<ConcreteMediator> mediator = std::make_shared<ConcreteMediator>();//创建中介者
    std::shared_ptr<Colleague> colleagueA = std::make_shared<ColleagueA>(mediator);//创建同事A
    std::shared_ptr<Colleague> colleagueB = std::make_shared<ColleagueB>(mediator);//创建同事B

    // //中介者管理两个同事,方便通讯
    mediator->setColleagueA(colleagueA);
    mediator->setColleagueB(colleagueB);

    //同事A发布消息
    colleagueA->send("通知了,今天公司门口可以做核酸啦 ...");

    //同事B发布消息
    colleagueB->send("收到,谢谢,我等下去门口做个核酸 ...");

    colleagueA = nullptr;
    colleagueB = nullptr;
    mediator = nullptr;

    //释放内存
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