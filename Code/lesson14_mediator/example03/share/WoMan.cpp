#include "../include/Woman.h"

WoMan::WoMan(std::string name, std::string sex, int age, Condition *selfCondition, Condition *condition, Mediator *mediator) : Person(name, sex, age, selfCondition, condition, mediator)
{
    cout << "WoMan()构造函数" << endl;
}

/**
 * @brief 女生找对象
 *
 * @param man 介绍的男生对象
 * @return true
 * @return false
 */
bool WoMan::getParter(Person *man)
{
    //通过中介去找对象
    return this->mediator->getParter(man,this);
}