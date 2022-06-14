#include "../include/Student.h"

Student::Student(int num,string name)
{
    cout << "Student()构造函数" << endl;
    this->name = name;
    this->number = num;
}

Student::~Student()
{
    cout << "~Student()析构函数" << endl;
}

string Student::getName()
{
    return "学生,姓名:" + this->name  + ",学号:" + to_string(this->number);
}