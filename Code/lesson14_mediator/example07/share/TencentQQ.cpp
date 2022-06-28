#include "../include/TencentQQ.h"

TencentQQ::TencentQQ()
{
    this->colleagues = new std::vector<IColleague *>();
}

TencentQQ::~TencentQQ()
{
    cout << "~TencentQQ()析构函数" << endl;
    //释放内存
    std::vector<IColleague *>::iterator iter;
    for (iter = this->colleagues->begin(); iter != this->colleagues->end(); iter++)
    {
        IColleague *c = *iter;
        delete c;
    }
    this->colleagues->clear();
}

/**
 * @brief 注册发布消息对象到中介者
 *
 * @param colleague 消息发布者
 */
void TencentQQ::registerColleague(IColleague *colleague)
{
    this->colleagues->push_back(colleague);
}

/**
 * @brief 消息发布者发布消息
 *
 * @param colleague 消息发布者
 */
void TencentQQ::notify(IColleague *colleague)
{
    colleague->talk(); //发布者说
    std::vector<IColleague *>::iterator iter;
    for (iter = this->colleagues->begin(); iter != this->colleagues->end(); iter++)
    {
        IColleague *c = *iter;
        if (c != colleague)
        {
            c->receive(colleague->getContent()); //通知给其他人
        }
    }
}