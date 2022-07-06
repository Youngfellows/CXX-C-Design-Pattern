#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include "../Global.h"
#include "../Subscriber.h"
#include "../Email.h"
#include "../subject/EmailData.h"

/**
 * @brief 派生类: 观察者,数据订阅者,校长
 *
 */
class Principal : public Subscriber
{
private:
    std::string name;                       //姓名
    std::string account;                    //邮箱账户
    std::shared_ptr<Email> email = nullptr; //接收到的被观察者变化的数据

public:
    Principal(std::string name, std::string account, std::shared_ptr<Publisher> subject);
    ~Principal();
    virtual void update() override;            //实现update()函数
    virtual std::string getAccount() override; //实现getAccount()函数

private:
    void display(); //显示邮件信息
};
#endif