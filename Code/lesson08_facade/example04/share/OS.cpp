#include "../include/OS.h"

OS::OS()
{
    cout << "OS()构造函数" << endl;
}

OS::~OS()
{
    cout << "~OS()析构函数" << endl;
}

void OS::load()
{
    std::cout << "载入操作系统中..." << std::endl;
    std::cout << "载入操作系统成功!" << std::endl;
}
