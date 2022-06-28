#include "../include/CColleague.h"

/**
 * @brief 构造函数,并初始化父类ID属性
 *
 * @param id ID属性
 */
CColleague::CColleague(int id)
{
    cout << "CColleague()构造函数" << endl;
    this->id = id;
}

CColleague::~CColleague()
{
    cout << "~CColleague()析构函数" << endl;
}

/**
 * @brief 为同仁设置中介者
 *
 * @param mediator 中介者
 */
void CColleague::setMediator(IMediator *mediator)
{
    this->mediator = mediator;
}

/**
 * @brief 获取ID号
 *
 * @return int 返回ID号
 */
int CColleague::getId()
{
    return this->id;
}

/**
 * @brief 接收到指定同仁发过来的消息
 *
 * @param sender 消息发送者,谁发过来的
 * @param msg 接收到的消息内容
 */
void CColleague::receiveMsg(IColleague *sender, const std::string &msg)
{
    cout << __FUNCTION__ << ":: 接收到" << sender->getId() << "发来的消息: " << msg << endl;
}

/**
 * @brief 发送消息给指定的人
 *
 * @param receiver 消息接收者,发给谁
 * @param msg 发送消息内容
 */
void CColleague::sendMsg(IColleague *receiver, const std::string &msg)
{
    cout << __FUNCTION__ << ":: 给" << receiver->getId() << "发送消息: " << msg << endl;
    if (this->mediator != nullptr)
    {
        //通过中介给指定对象发消息
        this->mediator->operation(this, receiver, msg);
    }
}