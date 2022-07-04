#ifndef FAN_H
#define FAN_H

#include "../Global.h"
#include "../IElectricalEquipment.h"

/**
 * @brief 电器派生类: 风扇
 *
 */
class Fan : public IElectricalEquipment
{
private:
public:
    Fan() = default;
    ~Fan() = default;
    virtual void powerOn() override;  //实现powerOn()函数
    virtual void powerOff() override; //实现powerOff()函数
};
#endif