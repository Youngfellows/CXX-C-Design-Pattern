#ifndef IELECTRICAL_EQUIPMENT_H
#define IELECTRICAL_EQUIPMENT_H

/**
 * @brief 抽象类: 抽象电器类
 *
 */
class IElectricalEquipment
{
public:
    virtual ~IElectricalEquipment() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 打开
     *
     */
    virtual void powerOn() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 关闭
     *
     */
    virtual void powerOff() = 0;
};

#endif