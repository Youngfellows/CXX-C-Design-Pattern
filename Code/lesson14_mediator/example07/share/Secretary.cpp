#include "../include/Secretary.h"

Secretary::Secretary(std::string name) : IColleague(name)
{
    cout << "Secretary()构造函数" << endl;
}

Secretary::~Secretary()
{
    cout << "~Secretary()析构函数" << endl;
}

void Secretary::talk()
{
    cout << "团支书:" << getName() << ",说: " << getContent() << endl;
}

void Secretary::receive(std::string msg)
{
    cout << "团支书:" << getName() << ",接收到消息: " << msg << endl;
}