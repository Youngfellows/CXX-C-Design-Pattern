#include "../include/Man.h"

Man::Man(std::string name, std::string sex, int age, Condition *selfCondition, Condition *condition, Mediator *mediator) : Person(name, sex, age, selfCondition, condition, mediator)
{
    cout << "Man()构造函数" << endl;
}

/**
 * @brief 男生找对象
 *
 * @param woman 介绍的女生对象
 * @return true
 * @return false
 */
bool Man::getParter(Person *woman)
{
    //通过中介去找对象
    return this->mediator->getParter(this, woman);
}