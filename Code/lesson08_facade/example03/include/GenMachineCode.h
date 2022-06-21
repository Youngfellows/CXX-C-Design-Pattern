#ifndef GEN_MACHINE_CODE_H
#define GEN_MACHINE_CODE_H

#include "./Global.h"

/**
 * @brief 写出一个编译器工作的几个阶段: 产生机器代码
 * 
 */
class GenMachineCode
{
    public:
        GenMachineCode();
        ~GenMachineCode();
        void genCode();
};
#endif