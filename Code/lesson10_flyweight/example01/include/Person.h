#ifndef PERSON_H
#define PERSON_H

#include "./Global.h"

/**
 * @brief 抽象基类: 人
 * 
 */
class Person
{
    protected:
        string name;//姓名
        int age;//年龄

    public:
        Person(string name,int age);
        ~Person();

        /**
         * @brief 纯虚函数,抽象接口: 打印信息
         * 
         */
        virtual void printInfo() = 0;
};

#endif