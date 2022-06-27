#ifndef CONCRETE_MEDIATOR_H
#define CONCRETE_MEDIATOR_H

#include "./Global.h"
#include "./Mediator.h"
#include "./Colleague.h"
#include "./ColleagueA.h"
#include "./ColleagueB.h"

/**
 * @brief 派生类: 具体的中介者
 * 
 */
class ConcreteMediator : public Mediator
{
    private:
       std::shared_ptr<Colleague> colleagueA = nullptr;//同事A
       std::shared_ptr<Colleague> colleagueB = nullptr;//同事B

    public:
        ConcreteMediator() = default;
        ~ConcreteMediator();
        void setColleagueA(std::shared_ptr<Colleague> colleagueA);//设置同事A
        void setColleagueB(std::shared_ptr<Colleague> colleagueA);//设置同事B
        virtual void send(const string & message,std::shared_ptr<Colleague> colleague) override;//实现send()函数
};
#endif