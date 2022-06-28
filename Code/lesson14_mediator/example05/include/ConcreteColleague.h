#ifndef CONCRETE_COLLEAGUE_H
#define CONCRETE_COLLEAGUE_H

#include "./Colleague.h"

/**
 * @brief 派生类: 同仁的具体实现类
 *
 */
class ConcreteColleague : public Colleague
{
    public:
        ConcreteColleague() = default;
        ConcreteColleague(Mediator *mediator, unsigned int id);
        ~ConcreteColleague();
        virtual void send(const std::string &message) override;    //实现send()方法
        virtual void receive(const std::string &message) override; //实现receive()方法
};
#endif