#include "../include/Person.h"

Person::Person(std::string name, std::string sex, int age, Condition *selfCondition, Condition *condition, Mediator *mediator)
{
    cout << "Person()构造函数" << endl;
    this->name = name;
    this->sex = sex;
    this->age = age;
    this->selfCondition = selfCondition;
    this->condition = condition;
    this->mediator = mediator;
}

std::string Person::getName() //获取姓名
{
    return this->name;
}

std::string Person::getSex() //获取性别
{
    return this->sex;
}

int Person::getAge() //获取年龄
{
    return this->age;
}

Condition *Person::getCondition() //获取要求条件
{
    return this->condition;
}

Condition *Person::getSelfCondition() //获取自身条件
{
    return this->selfCondition;
}

void Person::toString()
{
    cout << "Person::toString():: name:" << this->getName() << ",sex:" << this->getSex() << ",age:" << this->getAge() << endl;
    cout << "selfCondition:: ..." << endl;
    cout << "1,addr:" << this->selfCondition->getAddress() << endl;
    cout << "1,haveHouse:" << this->selfCondition->haveHouse() << endl;
    cout << "1,haveCar:" << this->selfCondition->haveCar() << endl;
    cout << "1,job:" << this->selfCondition->getJob() << endl;
    cout << "1,deposit:" << this->selfCondition->getDeposit() << endl;
    cout << "condition:: ..." << endl;
    cout << "2,addr:" << this->condition->getAddress() << endl;
    cout << "2,haveHouse:" << this->condition->haveHouse() << endl;
    cout << "2,haveCar:" << this->condition->haveCar() << endl;
    cout << "2,job:" << this->condition->getJob() << endl;
    cout << "2,deposit:" << this->condition->getDeposit() << endl;
}