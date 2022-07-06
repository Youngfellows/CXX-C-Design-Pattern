#include "../../include/observer/Principal.h"

/**
 * @brief 构造函数,并初始化父类属性
 *
 * @param name 姓名
 * @param account 邮箱账户
 * @param subject 被观察者
 */
Principal::Principal(std::string name, std::string account, std::shared_ptr<Publisher> subject) : Subscriber(subject)
{
    cout << "Principal()构造函数" << endl;
    this->name = name;
    this->account = account;
}

Principal::~Principal()
{
    cout << "~Principal()析构函数" << endl;
}

/**
 * @brief 获取观察者账号信息
 *
 * @return std::string 返回观察者账号
 */
std::string Principal::getAccount()
{
    return this->account;
}

/**
 * @brief 接收到被观察者数据变化的通知
 *
 */
void Principal::update()
{
    cout << "Principal::update():: " << this->account << endl;
    //获取被观察者变化的数据
    EmailPublisher *emailPublisher = dynamic_cast<EmailPublisher *>(this->subject.get()); //将智能指针转换为普通指针
    if (emailPublisher != nullptr)
    {
        this->email = emailPublisher->getEmail();
        this->display();
    }
}

void Principal::display()
{
    cout << "Principal::display():: ...." << endl;
    cout << "主  题:" << this->email->getSubject() << endl;
    cout << "发件人:" << this->email->getSender() << endl;
    cout << "内  容:" << this->email->getContent() << endl;
    cout << "附  件:" << this->email->getAttachment() << endl;
    cout << endl;
}
