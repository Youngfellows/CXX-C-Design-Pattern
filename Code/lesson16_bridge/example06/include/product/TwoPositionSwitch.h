#ifndef TWO_POSITION_SWITCH_H
#define TWO_POSITION_SWITCH_H

#include "../ISwitch.h"

/**
 * @brief 派生类: 两位式开关
 *
 */
class TwoPositionSwitch : public ISwitch
{
public:
    using ISwitch::ISwitch; // 使用父类及其函数
    ~TwoPositionSwitch() = default;
    virtual void on() override;  //实现on()函数
    virtual void off() override; //实现off()函数
};
#endif