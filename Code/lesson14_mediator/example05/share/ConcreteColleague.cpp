#include "../include/ConcreteColleague.h"

ConcreteColleague::ConcreteColleague(Mediator *mediator, unsigned int id) : Colleague(mediator, id)
{
    cout << "ConcreteColleague()构造函数" << endl;
}

ConcreteColleague::~ConcreteColleague()
{
    cout << "~ConcreteColleague()析构函数" << endl;
}

/**
 * @brief 通过中介者发送消息给其他人(对方)
 *
 * @param message 发送的消息
 */
void ConcreteColleague::send(const std::string &message)
{
    cout << "ID:" << this->getId() << ",发送消息: " << message << endl;
    this->mediator->distribute(this, message);
}

/**
 * @brief 通过中介者,接收到其他人发送过来的消息
 *
 * @param message 其他人发送过来的消息
 */
void ConcreteColleague::receive(const std::string &message)
{
    cout << "ID:" << this->getId() << ",接收到消息: " << message << endl;
}
