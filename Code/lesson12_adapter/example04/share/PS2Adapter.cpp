#include "../include/PS2Adapter.h"


PS2Adapter::PS2Adapter(std::unique_ptr<USB> usb)
{
    this->usb = std::move(usb);
}

PS2Adapter::~PS2Adapter()
{
    if(this->usb != nullptr)
    {
        this->usb = nullptr;
    }
}

/**
 * @brief 
 * 
 */
void PS2Adapter::isPS2()
{
    cout << "PS2Adapter::isPS2():: 使用适配器适配PS2接口 ..." << endl;
    this->usb->idUSB();
}