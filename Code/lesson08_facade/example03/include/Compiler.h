#ifndef COMPILER_H
#define COMPILER_H

#include "./Scanner.h"
#include "./Parser.h"
#include "./GenMachineCode.h"
#include "./GenMidCode.h"

/**
 * @brief 为这些复杂的操作提供一个一致的门面（外观）
 * @brief 高层接口 Facade
 * 
 */
class Compiler
{
    private:
        std::shared_ptr<Scanner> scanner = nullptr;
        std::shared_ptr<Parser> parser = nullptr;
        std::shared_ptr<GenMidCode> genMidCode = nullptr;
        std::shared_ptr<GenMachineCode> genMachineCode = nullptr;

    public:
        Compiler();
        ~Compiler();
        void run();
};
#endif