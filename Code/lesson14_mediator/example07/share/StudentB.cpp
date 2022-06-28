#include "../include/StudentB.h"

StudentB::StudentB(std::string name) : IColleague(name)
{
    cout << "StudentB()构造函数" << endl;
}

StudentB::~StudentB()
{
    cout << "~StudentB()析构函数" << endl;
}

void StudentB::talk()
{
    cout << "学生B:" << getName() << ",说: " << getContent() << endl;
}

void StudentB::receive(std::string msg)
{
    cout << "学生B:" << getName() << ",接收到消息: " << msg << endl;
}