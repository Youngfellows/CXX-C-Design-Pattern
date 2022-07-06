#ifndef EMAIL_DATA_H
#define EMAIL_DATA_H

#include "../EmailPublisher.h"

/**
 * @brief 派生类: 邮件数据,被观察者的具体实现,消息发布者的具体实现
 *
 */
class EmailData : public EmailPublisher
{
private:
    std::shared_ptr<Email> email = nullptr; //被观察数据

public:
    EmailData();
    ~EmailData();
    virtual void setEmail(std::shared_ptr<Email> email) override; //实现setEmail()函数
    virtual std::shared_ptr<Email> getEmail() override;           //实现getEmail()函数

private:
    void emailChange(); //邮件数据改变了,通知各个观察者邮件数据变化了
};

#endif