#ifndef MAN_H
#define MAN_H

#include "./Person.h"

/**
 * @brief 派生类对象: 男人
 *
 */
class Man : public Person
{
public:
    Man(std::string name, std::string sex, int age, Condition *selfCondition, Condition *condition, Mediator *mediator);
    virtual ~Man() = default;
    virtual bool getParter(Person *woman) override;//实现getParter()函数
};
#endif