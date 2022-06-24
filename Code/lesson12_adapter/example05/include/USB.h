#ifndef USB_H
#define USB_H

/**
 * @brief 抽象类: USB接口(老接口)
 * 
 */
class USB
{
    public:
       virtual ~USB() = default;

       /**
        * @brief 纯虚函数,抽象接口: USB接口
        * 
        */
       virtual void idUSB() = 0;
};




#endif