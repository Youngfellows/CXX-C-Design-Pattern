#ifndef MEDIATOR_H
#define MEDIATOR_H

#include "./Global.h"
#include "./Colleague.h"

//先声明,后面再定义
class Colleague;

/**
 * @brief 抽象类: 中介者类
 * 
 */
class Mediator
{
    public:
       virtual ~Mediator() = default;

       /**
        * @brief 纯虚函数,中介者发送消息给每一个同事
        * 
        * @param message  发送消息
        * @param colleague 发送消息的同事对象
        */
       virtual void send(const string & message,std::shared_ptr<Colleague> colleague) = 0;
};
#endif