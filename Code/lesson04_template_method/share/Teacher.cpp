#include "../include/Teacher.h"

Teacher::Teacher(int num,string name,double salary)
{
    cout << "Teacher()构造函数" << endl;
    this->name = name;
    this->number = num;
    this->salary = salary;
}

Teacher::~Teacher()
{
    cout << "~Teacher()析构函数" << endl;
}

string Teacher::getName()
{
    return "老师,姓名:" + this->name  + ",编号:" + to_string(this->number) + ",工资:" + to_string(this->salary);
}