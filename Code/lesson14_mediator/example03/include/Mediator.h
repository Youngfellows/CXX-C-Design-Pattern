#ifndef MEDIATOR_H
#define MEDIATOR_H

#include "./Person.h"

//先声明类
class Person;

/**
 * @brief 抽象类: 中介者抽象类
 * 
 */
class Mediator
{
    public:
        virtual ~Mediator() = default;
        
        /**
         * @brief 纯虚函数,抽象接口: 找对象
         * 
         * @param man 男人
         * @param woman 女人
         * @return true 匹配
         * @return false 不合适
         */
        virtual bool getParter(Person *man,Person *woman)  = 0;
};
#endif