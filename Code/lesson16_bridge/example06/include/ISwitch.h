#ifndef ISWITCH_H
#define ISWITCH_H

#include "./Global.h"
#include "./IElectricalEquipment.h"

/**
 * @brief 抽象类: 抽象开关类
 *
 */
class ISwitch
{
protected:
    IElectricalEquipment *eEquipment = nullptr; //电器设备

public:
    ISwitch(IElectricalEquipment *eEquipment);
    virtual ~ISwitch() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 打开电器
     *
     */
    virtual void on() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 关闭电器
     *
     */
    virtual void off() = 0;
};
#endif