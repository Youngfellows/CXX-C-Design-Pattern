#ifndef HARD_DISK_H
#define HARD_DISK_H

#include "./Global.h"

/**
 * @brief 子系统: 硬盘
 * 
 */
class HardDisk
{
    public:
        HardDisk();
        ~HardDisk();
        void read();
};
#endif