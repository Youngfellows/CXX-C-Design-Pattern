#include "../include/Memory.h"

Memory::Memory()
{
    cout << "Memory()构造函数" << endl;
}

Memory::~Memory()
{
    cout << "~Memory()析构函数" << endl;
}

void Memory::selfCheck()
{
    std::cout << "内存自检中..." << std::endl;
    std::cout << "内存自检完成!" << std::endl;  
}