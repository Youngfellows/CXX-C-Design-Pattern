#include "../../include/observer/Teacher.h"

/**
 * @brief 构造函数,并初始化父类属性
 *
 * @param name 姓名
 * @param account 邮箱账户
 * @param subject 被观察者
 */
Teacher::Teacher(std::string name, std::string account, std::shared_ptr<Publisher> subject) : Subscriber(subject)
{
    cout << "Teacher()构造函数" << endl;
    this->name = name;
    this->account = account;
}

Teacher::~Teacher()
{
    cout << "~Teacher()析构函数" << endl;
}

/**
 * @brief 获取观察者账号信息
 *
 * @return std::string 返回观察者账号
 */
std::string Teacher::getAccount()
{
    return this->account;
}

/**
 * @brief 接收到被观察者数据变化的通知
 *
 */
void Teacher::update()
{
    cout << "Teacher::update():: " << this->account << endl;
    //获取被观察者变化的数据
    EmailPublisher *emailPublisher = dynamic_cast<EmailPublisher *>(this->subject.get()); //将智能指针转换为普通指针
    if (emailPublisher != nullptr)
    {
        this->email = emailPublisher->getEmail();
        this->display();
    }
}

void Teacher::display()
{
    cout << "Teacher::display():: ...." << endl;
    cout << "主  题:" << this->email->getSubject() << endl;
    cout << "发件人:" << this->email->getSender() << endl;
    cout << "内  容:" << this->email->getContent() << endl;
    cout << "附  件:" << this->email->getAttachment() << endl;
    cout << endl;
}