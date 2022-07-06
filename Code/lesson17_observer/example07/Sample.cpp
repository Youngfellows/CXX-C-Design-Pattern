#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //观察者模式
    std::shared_ptr<EmailData> publisher = std::make_shared<EmailData>();                                               //被观察者,消息发布者
    std::shared_ptr<Student> student1 = std::make_shared<Student>("张无忌", "zhangwuji@qq.com", publisher);             //观察者1
    std::shared_ptr<Student> student2 = std::make_shared<Student>("赵敏", "zhaomin@163.com", publisher);                //观察者2
    std::shared_ptr<Student> student3 = std::make_shared<Student>("周芷若", "zhouzhiruo@163.com", publisher);           //观察者3
    std::shared_ptr<Teacher> teacher1 = std::make_shared<Teacher>("宋远桥", "songyuanqiao@gmail.com", publisher);       //观察者4
    std::shared_ptr<Teacher> teacher2 = std::make_shared<Teacher>("杨逍", "yangxiao@qq.com", publisher);                //观察者5
    std::shared_ptr<Principal> principal = std::make_shared<Principal>("王重阳", "wangchongyang@gmail.com", publisher); //观察者6

    //注册观察者
    publisher->attach(student3.get());

    //被观察者数据变化，模拟发送邮件
    std::vector<std::string> *receivers = new std::vector<std::string>(); //
    receivers->push_back(student1->getAccount());
    receivers->push_back(student2->getAccount());
    receivers->push_back(student3->getAccount());
    receivers->push_back(teacher1->getAccount());
    receivers->push_back(teacher2->getAccount());
    receivers->push_back(principal->getAccount());

    std::string sender = teacher1->getAccount();
    std::string subject = "放假";
    std::string content = "通知,国庆节放假7天";
    std::string attachment = "放假加班调休表.png";

    std::shared_ptr<Email> email = std::make_shared<Email>(sender, receivers, subject, content, attachment);

    publisher->setEmail(email); //被观察者数据变化

    

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