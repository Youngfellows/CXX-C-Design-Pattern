#include "../include/Email.h"

Email::Email(std::string sender, std::vector<std::string> *receivers, std::string subject, std::string content, std::string attachment)
{
    cout << "Email()构造函数" << endl;
    this->sender = sender;
    this->receivers = receivers;
    this->subject = subject;
    this->content = content;
    this->attachment = attachment;
}

Email::~Email()
{
    cout << "~Email()析构函数" << endl;
    //释放内存
    for (string receiver : *this->receivers)
    {
        //移除元素
        this->receivers->erase(std::remove(this->receivers->begin(), this->receivers->end(), receiver), this->receivers->end());
    }
    this->receivers->clear();
}

std::string Email::getSender()
{
    return this->sender;
}

std::vector<std::string> *Email::getReceivers()
{
    return this->receivers;
}

std::string Email::getSubject()
{
    return this->subject;
}

std::string Email::getContent()
{
    return this->content;
}

std::string Email::getAttachment()
{
    return this->attachment;
}