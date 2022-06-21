#ifndef GEN_MID_CODE_H
#define GEN_MID_CODE_H

#include "./Global.h"

/**
 * @brief 写出一个编译器工作的几个阶段: 产生中间代码
 * 
 */
class GenMidCode
{
    public:
        GenMidCode();
        ~GenMidCode();
        void genCode();
};
#endif