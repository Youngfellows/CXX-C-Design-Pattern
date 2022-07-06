#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include "./Global.h"
#include "./Publisher.h"

//先声明类,后面再定义
class Publisher;

/**
 * @brief 抽象类: 观察者抽象类,消息订阅者抽象类
 *
 */
class Subscriber
{
protected:
    std::shared_ptr<Publisher> subject = nullptr; //被观察者

public:
    Subscriber(std::shared_ptr<Publisher> subject);
    virtual ~Subscriber();

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 接收被观察者数据变化了的通知
     *
     */
    virtual void update() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     *
     * @return std::string 返回发送者账号
     */
    virtual std::string getAccount() = 0;
};
#endif