#ifndef STEWARDESS_H
#define STEWARDESS_H

#include "./Person.h"


/**
 * @brief 派生类: 空姐
 * 
 */
class Stewardess : public Person
{
    private:
        string airlines;//航空公司

    public:
        Stewardess() = default;
        Stewardess(const string &name,int age,const string &airlines);//构造函数1
        Stewardess(string &&name,int age,string &&airlines);//构造函数2
        ~Stewardess() = default;
        virtual void show() override;//实现show()函数
};
#endif