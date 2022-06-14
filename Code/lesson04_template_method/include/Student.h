#ifndef STUDENT_H
#define STUDENT_H

#include "./AbstractPerson.h"

class Student : public AbstractPerson
{
    private:
        int number;//学号
        string name;//姓名

    public:
        Student(int num,string name);
        virtual  ~Student();
        string getName() override;//重写函数
};
#endif