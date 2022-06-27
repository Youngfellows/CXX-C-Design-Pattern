#include "../include/ColleagueB.h"

/**
 * @brief 构造函数,并初始化父类中介者对象
 * 
 * @param mediator 中介者对象
 */
ColleagueB::ColleagueB(std::shared_ptr<Mediator> mediator) : Colleague(mediator)
{
    cout << "ColleagueB()构造函数" << endl;
}

ColleagueB::~ColleagueB()
{
    cout << "~ColleagueB()析构函数" << endl;
}

void ColleagueB::send(const string & message)
{
    cout << "同事B发送: " << message << endl;
}

void ColleagueB::notify(const string & message)
{
    cout << "同事B接收到: " << message << endl;
}
