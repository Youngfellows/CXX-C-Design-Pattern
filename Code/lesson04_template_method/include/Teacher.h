#ifndef TEACHER_H
#define TEACHER_H

#include "./AbstractPerson.h"

class Teacher : public AbstractPerson
{
    private:
        int number;//编号
        string name;//姓名
        double salary;//工资 

    public:
        Teacher(int num,string name,double salary);
        virtual ~Teacher();
        string getName() override;//重写函数
};
#endif