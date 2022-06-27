#include "../include/ColleagueA.h"

/**
 * @brief 构造函数,并初始化父类中介者对象
 * 
 * @param mediator 中介者对象
 */
ColleagueA::ColleagueA(std::shared_ptr<Mediator> mediator) : Colleague(mediator)
{
    cout << "ColleagueA()构造函数" << endl;
}

ColleagueA::~ColleagueA()
{
    cout << "~ColleagueA()析构函数" << endl;
}

void ColleagueA::send(const string & message)
{
    cout << "同事A发送: " << message << endl;
}

void ColleagueA::notify(const string & message)
{
    cout << "同事A接收到: " << message << endl;
}