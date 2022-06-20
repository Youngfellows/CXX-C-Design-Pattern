#include "../include/PrinterProxy.h"

PrinterProxy::PrinterProxy(string name)
{
    cout << "PrinterProxy()构造函数" << endl;
    this->printer = std::make_shared<Printer>(name);
}

PrinterProxy::~PrinterProxy()
{
    cout << "~PrinterProxy()析构函数" << endl; 
    if(this->printer != nullptr)
    {
        this->printer = nullptr;
    }
}

void PrinterProxy::setPrinterName(string name)
{
    this->printer->setPrinterName(name);
}

string PrinterProxy::getPrinterName()
{
    return this->printer->getPrinterName();
}

void PrinterProxy::print()
{
    this->printer->print();
}