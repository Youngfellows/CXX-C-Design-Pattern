#include "../include/HardDisk.h"

HardDisk::HardDisk()
{
    cout << "HardDisk()构造函数" << endl;
}

HardDisk::~HardDisk()
{
    cout << "~HardDisk()析构函数" << endl;
}

void HardDisk::read()
{
    std::cout << "读取硬盘中..." << std::endl;
    std::cout << "读取硬盘成功!" << std::endl;
}
