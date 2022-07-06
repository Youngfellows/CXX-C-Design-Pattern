#ifndef EMAIL_PUBLISHER_H
#define EMAIL_PUBLISHER_H

#include "./Publisher.h"
#include "./Email.h"

/**
 * @brief 派生类: 被观察者的抽象实现,邮件发送者
 *
 */
class EmailPublisher : public Publisher
{
public:
    virtual ~EmailPublisher() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置邮件数据
     *
     * @param email 邮件数据
     */
    virtual void setEmail(std::shared_ptr<Email> email) = 0;

    /**
     * @brief 获取被观察者邮件数据
     *
     * @return std::shared_ptr<Email>
     */
    virtual std::shared_ptr<Email> getEmail() = 0;
};

#endif