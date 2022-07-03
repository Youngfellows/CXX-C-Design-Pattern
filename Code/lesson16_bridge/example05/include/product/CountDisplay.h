#ifndef COUNT_DISPLAY_H
#define COUNT_DISPLAY_H

#include "./NormalDisplay.h"

/**
 * @brief 派生类: 多显示负责人
 *
 */
class CountDisplay : public NormalDisplay
{

public:
    CountDisplay() = default;
    ~CountDisplay() = default;
    using NormalDisplay::NormalDisplay;    //使用父类方法
    void mulitDisplay(unsigned int count); //多显示
};
#endif