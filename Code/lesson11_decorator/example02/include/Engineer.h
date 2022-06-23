#ifndef ENGINEER_H
#define ENGINEER_H

#include "./Person.h"


/**
 * @brief 派生类: 工程师
 * 
 */
class Engineer : public Person
{
    private:
        string post;//职位

    public:
        Engineer() = default;
        Engineer(const string &name,int age,const string &post);//构造函数1
        Engineer(string &&name,int age,string &&post);//构造函数2
        ~Engineer() = default;
        virtual void show() override;//实现show()函数
};
#endif