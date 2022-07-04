#include "../../include/product/PullChainSwitch.h"

/**
 * @brief 使用拉链式开关打开电器
 *
 */
void PullChainSwitch::on()
{
    cout << "PullChainSwitch::on():: 使用拉链式开关 ..." << endl;
    this->eEquipment->powerOn();
}

/**
 * @brief 使用拉链式开关关闭电器
 *
 */
void PullChainSwitch::off()
{
    cout << "PullChainSwitch::on():: 使用拉链式开关 ..." << endl;
    this->eEquipment->powerOff();
}