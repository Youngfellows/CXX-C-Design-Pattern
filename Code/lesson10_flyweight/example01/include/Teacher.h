#ifndef TEACHER_H
#define TEACHER_H

#include "./Person.h"

/**
 * @brief 派生类: 教师
 * 
 */
class Teacher : public Person
{
    private:
        string id;

    public:
        Teacher(string name,int age,string id);
        ~Teacher();
        virtual void printInfo() override;//实现printInfo()函数
};
#endif