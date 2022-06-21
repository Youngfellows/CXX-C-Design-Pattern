#include "../include/Processor.h"

Processor::Processor()
{
    cout << "Processor()构造函数" << endl;
}

Processor::~Processor()
{
    cout << "~Processor()析构函数" << endl;
}

void Processor::run()
{
    std::cout << "启动CPU中..." << std::endl;
    std::cout << "启动CPU成功!" << std::endl; 
}