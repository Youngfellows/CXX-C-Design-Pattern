#ifndef PERSON_H
#define PERSON_H

#include "./Global.h"
#include "./Condition.h"
#include "./Mediator.h"

//先声明类,后面再定义
class Mediator;

/**
 * @brief 抽象类: 人
 *
 */
class Person
{
    private:
        std::string name;         //姓名
        std::string sex;          //性别
        int age;                  //年龄
        Condition *condition;     //要求条件
        Condition *selfCondition; //自身条件

    protected:
        Mediator *mediator; //中介者

    public:
        Person() = default;
        Person(std::string name, std::string sex, int age, Condition *selfCondition, Condition *condition, Mediator *mediator);
        ~Person() = default;

        /**
         * @brief 纯虚函数,抽象接口: 找对象
         *
         * @param parter 介绍的人
         * @return true 般配
         * @return false 不合适
         */
        virtual bool getParter(Person *parter) = 0;

        std::string getName();         //获取姓名
        std::string getSex();          //获取性别
        int getAge();                  //获取年龄
        Condition *getCondition();     //获取条件
        Condition *getSelfCondition(); //获取自身条件
        void toString();
};
#endif