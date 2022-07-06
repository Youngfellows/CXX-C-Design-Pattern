#ifndef EMAIL_H
#define EMAIL_H

#include "./Global.h"

/**
 * @brief 实体类: 邮件信息
 *
 */
class Email
{
private:
    std::string sender;                            //发送者
    std::vector<std::string> *receivers = nullptr; //接收者
    std::string subject;                           //邮件主题
    std::string content;                           //邮件内容
    std::string attachment;                        //邮件附件

public:
    Email(std::string sender, std::vector<std::string> *receivers, std::string subject, std::string content, std::string attachment);
    ~Email();
    std::string getSender();
    std::vector<std::string> *getReceivers();
    std::string getSubject();
    std::string getContent();
    std::string getAttachment();
};
#endif