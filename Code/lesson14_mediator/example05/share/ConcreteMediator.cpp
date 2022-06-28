#include "../include/ConcreteMediator.h"

ConcreteMediator::ConcreteMediator()
{
    cout << "ConcreteMediator()构造函数" << endl;
    colleagues = new std::vector<Colleague *>();
}

ConcreteMediator::~ConcreteMediator()
{
    cout << "~ConcreteMediator()析构函数" << endl;
    //释放内存
    if (!this->colleagues->empty())
    {
        std::vector<Colleague *>::iterator iter;
        for (iter = this->colleagues->begin(); iter != this->colleagues->end(); iter++)
        {
            Colleague *tempColleague = *iter;
            delete tempColleague;
        }
        //清空容器
        this->colleagues->clear();
    }
}

void ConcreteMediator::add(Colleague *const colleague)
{
    this->colleagues->push_back(colleague);
}

/**
 * @brief 通过中介发送消息
 *
 * @param sender 发送者
 * @param message 要发送的消息
 */
void ConcreteMediator::distribute(Colleague *const sender, const std::string &message)
{
    for (unsigned int i = 0; i < this->colleagues->size(); i++)
    {
        //发送给除了自己之外的其他人
        if (this->colleagues->at(i)->getId() != sender->getId())
        {
            this->colleagues->at(i)->receive(message);
        }
    }
}
