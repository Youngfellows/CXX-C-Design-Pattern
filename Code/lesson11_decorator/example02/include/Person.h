#ifndef PERSON_H
#define PERSON_H

#include "./Global.h"

/**
 * @brief 抽象类: 人
 * 
 */
class Person
{
    private:
        string name;//姓名
        int age;//年龄

    public:
        Person() = default;//默认构造函数
        Person(const string &name,int age);//构造函数1
        Person(string &&name,int age);//构造函数2
        virtual ~Person() = default;//默认析构函数

        /**
         * @brief 纯虚函数,抽象接口: 显示人的信息
         * 
         */
        virtual void show() = 0;

        string getName();//获取名字
        int getAge();//获取年龄
};
#endif