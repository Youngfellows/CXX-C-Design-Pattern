#ifndef PS2_ADAPTER_H
#define PS2_ADAPTER_H

#include "./Global.h"
#include "./PS2.h"
#include "./USB.h"

/**
 * @brief 对象适配器
 * @brief PS2接口适配器: 使USB接口线也能支持PS2接口
 * 
 */
class PS2Adapter : public PS2
{
    private:
        std::unique_ptr<USB> usb = nullptr;//被适配对象

    public:
        PS2Adapter(std::unique_ptr<USB> usb);
        ~PS2Adapter();
        virtual void isPS2() override;//实现isPS2()函数
};

#endif