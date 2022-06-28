#include "../include/StudentA.h"


StudentA::StudentA(std::string name) : IColleague(name)
{
    cout << "StudentA()构造函数" << endl;
}

StudentA::~StudentA()
{
    cout << "~StudentA()析构函数" << endl;
}

void StudentA::talk()
{
    cout << "学生A:" << getName() << ",说: " << getContent() << endl;
}

void StudentA::receive(std::string msg)
{
    cout << "学生A:" << getName() << ",接收到消息: " << msg << endl;
}