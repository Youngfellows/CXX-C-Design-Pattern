#ifndef WOMAN_H
#define WOMAN_H

#include "./Person.h"

/**
 * @brief 派生类对象: 女人
 *
 */
class WoMan : public Person
{
public:
    WoMan(std::string name, std::string sex, int age, Condition *selfCondition, Condition *condition, Mediator *mediator);
    virtual ~WoMan() = default;
    virtual bool getParter(Person *man) override;//实现getParter()函数
};
#endif