#ifndef MEDIATOR_H
#define MEDIATOR_H

#include "./Global.h"
#include "./Colleague.h"

//先声明类,后面再定义
class Colleague;

/**
 * @brief 抽象类接口: 中介者抽象类
 *
 */
class Mediator
{
    public:
        Mediator() = default;
        virtual ~Mediator() = default;

        /**
         * @brief 纯虚函数,抽象接口
         * @brief 添加Colleague对象到中介
         *
         * @param colleague 同事、同仁
         */
        virtual void add(Colleague *const colleague) = 0;

        /**
         * @brief 纯虚函数,抽象接口
         * @brief 中介者分发消息到各个对象
         *
         * @param sender 消息发送者
         * @param message 发送的消息
         */
        virtual void distribute(Colleague *const sender, const std::string &message) = 0;
};

#endif