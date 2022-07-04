#ifndef LIGHT_H
#define LIGHT_H

#include "../Global.h"
#include "../IElectricalEquipment.h"

/**
 * @brief 电器派生类: 电灯
 *
 */
class Light : public IElectricalEquipment
{
private:
public:
    Light() = default;
    ~Light() = default;
    virtual void powerOn() override;  //实现powerOn()函数
    virtual void powerOff() override; //实现powerOff()函数
};
#endif