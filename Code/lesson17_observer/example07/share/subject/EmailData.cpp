#include "../../include/subject/EmailData.h"

EmailData::EmailData()
{
    cout << "EmailData()构造函数" << endl;
}

EmailData::~EmailData()
{
    cout << "~EmailData()析构函数" << endl;
}

/**
 * @brief 被观察者数据变化了
 *
 * @param email 邮件数据
 */
void EmailData::setEmail(std::shared_ptr<Email> email)
{
    this->email = email;
    emailChange();
}

/**
 * @brief 获取被观察者被观察数据
 *
 * @return std::shared_ptr<Email> 返回被观察邮件数据
 */
std::shared_ptr<Email> EmailData::getEmail()
{
    return this->email;
}

/**
 * @brief 邮件数据改变了,通知各个观察者邮件数据变化了
 *
 */
void EmailData::emailChange()
{
    this->notifyObservers(); //调用父类的方法通知各个观察者
}
