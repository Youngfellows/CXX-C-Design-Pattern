#ifndef PULL_CHAIN_SWITCH_H
#define PULL_CHAIN_SWITCH_H

#include "../ISwitch.h"

/**
 * @brief 派生类: 拉链式开关
 *
 */
class PullChainSwitch : public ISwitch
{
public:
    using ISwitch::ISwitch; // 使用父类及其函数
    ~PullChainSwitch() = default;
    virtual void on() override;  //实现on()函数
    virtual void off() override; //实现off()函数
};
#endif