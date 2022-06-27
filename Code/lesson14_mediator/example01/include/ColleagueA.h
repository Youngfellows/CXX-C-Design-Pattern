#ifndef COLLEAGUE_A_H
#define COLLEAGUE_A_H

#include "./Colleague.h"

/**
 * @brief 派生类: 同事A
 * 
 */
class ColleagueA : public Colleague
{
    private:
       
    public:
        ColleagueA(std::shared_ptr<Mediator> mediator);
        ~ColleagueA();
        virtual void send(const string & message) override;//实现send()函数
        virtual void notify(const string & message) override;//实现notify()函数
};
#endif