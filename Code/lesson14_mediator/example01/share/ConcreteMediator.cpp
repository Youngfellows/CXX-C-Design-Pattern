#include "../include/ConcreteMediator.h"

ConcreteMediator::~ConcreteMediator()
{
    cout << "~ConcreteMediator()析构函数" << endl;
}

void ConcreteMediator::setColleagueA(std::shared_ptr<Colleague> colleagueA)
{
    this->colleagueA = colleagueA;
}

void ConcreteMediator::setColleagueB(std::shared_ptr<Colleague> colleagueA)
{
    this->colleagueB = colleagueB;
}

/**
 * @brief 通过中介者发送消息
 * 
 * @param message 发送的消息
 * @param colleague 消息发送者
 */
void ConcreteMediator::send(const string & message,std::shared_ptr<Colleague> colleague)
{
    if(this->colleagueA == colleague)
    {
        this->colleagueB->notify(message);
    }else if(this->colleagueB == colleague)
    {
        this->colleagueA->notify(message);
    }
}