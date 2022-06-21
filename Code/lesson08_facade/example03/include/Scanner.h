#ifndef SCANNER_H
#define SCANNER_H

#include "./Global.h"

/**
 * @brief 写出一个编译器工作的几个阶段: 词法分析
 * 
 */
class Scanner
{
    public:
        Scanner();
        ~Scanner();
        void scan();
};
#endif