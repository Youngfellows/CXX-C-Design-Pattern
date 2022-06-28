#include "../include/Monitor.h"


Monitor::Monitor(std::string name) : IColleague(name)
{
    cout << "Monitor()构造函数" << endl;
}

Monitor::~Monitor()
{
    cout << "~Monitor()析构函数" << endl;
}

void Monitor::talk()
{
    cout << "班长:" << getName() << ",说: " << getContent() << endl;
}

void Monitor::receive(std::string msg)
{
    cout << "班长:" << getName() << ",接收到消息: " << msg << endl;
}
