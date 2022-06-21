#include "../include/ComputerOperator.h"

ComputerOperator::ComputerOperator()
{
    cout << "ComputerOperator()构造函数" << endl;
    this->memory = new Memory();
    this->hardDisk = new HardDisk();
    this->processor = new Processor();
    this->os = new OS();
}

ComputerOperator::~ComputerOperator()
{
    cout << "~ComputerOperator()析构函数" << endl;
    delete this->memory;
    delete this->hardDisk;
    delete this->processor;
    delete this->os;
    this->memory = nullptr;
    this->hardDisk = nullptr;
    this->processor = nullptr;
    this->os = nullptr;
}

void ComputerOperator::powerOn()
{
    std::cout << "正在开机..." << std::endl;
    this->memory->selfCheck();
    this->processor->run();
    this->hardDisk->read();
    this->os->load();
    std::cout << "开机成功!" << std::endl;
}
