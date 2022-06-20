#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //代理模式,通过代理类访问被代理对象
    std::shared_ptr<Printable> proxy = std::make_shared<PrinterProxy>("192.168.1.23::5555"); 
    proxy->print();//通过代理类访问,打印
    proxy->setPrinterName("192.168.2.55:6868");//通过代理类访问,设置打印机名称
    proxy->print();
    
    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}