#include "../include/Printer.h"

Printer::Printer(string name)
{
    cout << "Printer()构造函数" << endl;
    this->name = name;
}

Printer::~Printer()
{
    cout << "~Printer()析构函数" << endl;  
}

void Printer::setPrinterName(string name)
{
    this->name = name;
}

string Printer::getPrinterName()
{
    return this->name;
}

void Printer::print()
{
    std::cout << __FUNCTION__ <<  " " << getPrinterName() << std::endl;
    this->heavyJob();
}

void Printer::heavyJob()
{
    std::cout << __FUNCTION__ << " start ..." << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }
    std::cout << __FUNCTION__ << " end ..." << std::endl;
}