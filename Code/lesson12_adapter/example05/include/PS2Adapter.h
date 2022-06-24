#ifndef PS2_ADAPTER_H
#define PS2_ADAPTER_H

#include "./Global.h"
#include "./PS2.h"
#include "./USBer.h"

/**
 * @brief 类适配器
 * @brief PS2接口适配器: 使USB接口线也能支持PS2接口
 * 
 */
class PS2Adapter : public PS2, private USBer
{
    public:
        PS2Adapter() = default;
        ~PS2Adapter() = default;
        virtual void isPS2() override;//实现isPS2()函数
};

#endif