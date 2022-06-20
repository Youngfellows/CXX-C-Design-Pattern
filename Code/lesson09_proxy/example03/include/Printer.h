#ifndef PRINTER_H
#define PRINTER_H

#include "./Printable.h"

/**
 * @brief 实体类: 打印机
 * 
 */
class Printer : public Printable
{
    private:
    string name;//打印机名称

    public:
        Printer(string name);
        ~Printer();
        virtual void setPrinterName(string name) override;//实现setPrinterName()函数
        virtual string getPrinterName() override;//实现getPrinterName()函数
        virtual void print() override;//实现print()函数

    private:
        void heavyJob();//繁重的工作
};
#endif