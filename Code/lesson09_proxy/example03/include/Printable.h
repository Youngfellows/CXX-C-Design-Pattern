#ifndef PRINT_ABLE_H
#define PRINT_ABLE_H

#include "./Global.h"

/**
 * @brief 抽象类: 能打印的接口
 * 
 */
class Printable
{
    public:
       virtual ~Printable();

       /**
        * @brief 设置打印机名称
        * 
        * @param name 打印机名称
        */
       virtual void setPrinterName(string name) = 0;

        /**
         * @brief 获取打印机名称
         * 
         * @return string & 
         */
       virtual string getPrinterName() = 0;

        /**
         * @brief 打印
         * 
         */
       virtual void print() = 0;
};
#endif