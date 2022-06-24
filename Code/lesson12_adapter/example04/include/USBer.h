#ifndef USBER_H
#define USBER_H

#include "./Global.h"
#include "./USB.h"

/**
 * @brief 派生类: USB接口实现类
 * 
 */
class USBer : public USB
{
    public:
        USBer() = default;
        ~USBer() = default;
        virtual void idUSB() override;//实现idUSB()函数
};
#endif