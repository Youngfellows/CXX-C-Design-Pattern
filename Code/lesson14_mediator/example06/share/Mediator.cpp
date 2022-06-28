#include "../include/Mediator.h"

Mediator::Mediator()
{
    this->colleagues = new std::unordered_map<int, IColleague *>();
}

Mediator::~Mediator()
{
    cout << "~Mediator()" << endl;
    //释放内存
    std::unordered_map<int, IColleague *>::iterator iter;
    for (iter = this->colleagues->begin(); iter != this->colleagues->end(); iter++)
    {
        IColleague *temp = iter->second;
        delete temp;
    }
    this->colleagues->clear();
}

/**
 * @brief 通过中介把消息发送给指定接收者
 *
 * @param sender 消息发送者
 * @param receiver 消息接收者
 * @param msg 发送的消息
 */
void Mediator::operation(IColleague *sender, IColleague *receiver, const std::string &msg)
{
    std::unordered_map<int, IColleague *>::iterator iter = this->colleagues->find(receiver->getId());
    if (iter != this->colleagues->end())
    {
        IColleague *colleague = iter->second;
        colleague->receiveMsg(sender, msg); //通过中介把消息传递给接收者
    }
}

/**
 * @brief 注册colleague到中介
 *
 * @param colleague
 */
void Mediator::registerColleague(IColleague *colleague)
{
    if (colleague != nullptr)
    {
        std::unordered_map<int, IColleague *>::iterator iter = this->colleagues->find(colleague->getId());
        if (iter == this->colleagues->end())
        {
            //保存到容器中
            this->colleagues->insert(std::pair<int, IColleague *>(colleague->getId(), colleague));
            //重要: 设置中介者给colleague
            colleague->setMediator(this);
        }
    }
}