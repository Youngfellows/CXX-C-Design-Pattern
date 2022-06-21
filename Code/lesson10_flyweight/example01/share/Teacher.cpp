#include "../include/Teacher.h"

Teacher::Teacher(string name,int age,string id) : Person(name,age)
{
    cout << "Teacher()构造函数" << endl;
    this->id = id;
}

Teacher::~Teacher()
{
    cout << "~Teacher()析构函数" << endl;
}

void Teacher::printInfo()
{
    cout << "======老师信息=======" << endl;
    cout << "编号:" << this->id << endl;
    cout << "姓名:" << this->name << endl;
    cout << "年龄:" << this->age << endl;

}