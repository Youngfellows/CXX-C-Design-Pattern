#ifndef COLLEAGUE_B_H
#define COLLEAGUE_B_H

#include "./Colleague.h"

/**
 * @brief 派生类: 同事B
 * 
 */
class ColleagueB : public Colleague
{
    private:
       
    public:
        ColleagueB(std::shared_ptr<Mediator> mediator);
        ~ColleagueB();
        virtual void send(const string & message) override;//实现send()函数
        virtual void notify(const string & message) override;//实现notify()函数
};
#endif