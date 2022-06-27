#ifndef COLLEAGUE_H
#define COLLEAGUE_H

#include "./Global.h"
#include "./Mediator.h"

//先声明对象
class Mediator;

/**
 * @brief 抽象类: 抽象同事类
 * 
 */
class Colleague
{
    private:
        std::shared_ptr<Mediator> mediator = nullptr;//每一个同事持有中介者对象,方便通过中介通知其他同事

    public:
        Colleague(std::shared_ptr<Mediator> mediator);

        /**
         * @brief 默认析构函数
         * 
         */
        virtual ~Colleague() = default;

        /**
         * @brief 纯虚函数,抽象接口: 发布消息
         * 
         * @param message 发布的消息
         */
        virtual void send(const string & message) = 0;

        /**
         * @brief 纯虚函数,抽象接口: 接收到消息
         * 
         * @param message  接收到的消息
         */
        virtual void notify(const string & message) = 0;
};
#endif