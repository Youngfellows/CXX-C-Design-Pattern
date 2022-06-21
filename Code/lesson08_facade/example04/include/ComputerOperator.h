#ifndef COMPUTER_OPERATOR_H
#define COMPUTER_OPERATOR_H

#include "./Memory.h"
#include "./HardDisk.h"
#include "./OS.h"
#include "./Processor.h"

/**
 * @brief 为这些复杂的操作提供一个一致的门面（外观）
 * @brief 高层接口 Facade
 * 
 */
class ComputerOperator
{
    private:
        Memory *memory = nullptr;//内存
        HardDisk *hardDisk = nullptr;//硬盘
        Processor *processor = nullptr;//处理器
        OS *os = nullptr;//操作系统

    public:
        ComputerOperator();
        ~ComputerOperator();
        void powerOn();//开机
};

#endif