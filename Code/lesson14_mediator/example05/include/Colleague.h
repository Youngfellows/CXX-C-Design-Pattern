#ifndef COLLEAGUE_H
#define COLLEAGUE_H

#include "./Global.h"
#include "./Mediator.h"

//先声明类,后面定义
class Mediator;

/**
 * @brief 抽象类: 同事、同仁、同僚
 *
 */
class Colleague
{
    private:
        unsigned int id;    // ID号

    protected:
        Mediator *mediator; //中介者

    public:
        Colleague(Mediator *mediator, unsigned int id);
        virtual ~Colleague() = default;
        unsigned int getId(); //返回ID号

        /**
         * @brief 纯虚函数,抽象接口
         * @brief 发送消息
         *
         * @param message
         */
        virtual void send(const std::string &message) = 0;

        /**
         * @brief 纯虚函数,抽象接口
         * @brief 接收到消息
         *
         * @param message
         */
        virtual void receive(const std::string &message) = 0;
};
#endif