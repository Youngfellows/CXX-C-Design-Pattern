#ifndef PRINTER_PROXY_H
#define PRINTER_PROXY_H

#include "./Printer.h"

/**
 * @brief 代理类: 打印机代理类
 * 
 */
class PrinterProxy : public Printable
{
    private:
      std::shared_ptr<Printable> printer = nullptr;//代理对象指针变量

    public:
        PrinterProxy(string name);
        ~PrinterProxy();
        virtual void setPrinterName(string name) override;//实现setPrinterName()函数
        virtual string  getPrinterName() override;//实现getPrinterName()函数
        virtual void print() override;//实现print()函数
};
#endif