#include "../../include/product/TwoPositionSwitch.h"

/**
 * @brief 使用两位式开关打开电器
 *
 */
void TwoPositionSwitch::on()
{
    cout << "TwoPositionSwitch::on():: 使用两位式开关 ..." << endl;
    this->eEquipment->powerOn();
}

/**
 * @brief 使用两位式开关关闭电器
 *
 */
void TwoPositionSwitch::off()
{
    cout << "TwoPositionSwitch::on():: 使用两位式开关 ..." << endl;
    this->eEquipment->powerOff();
}