#ifndef NORMAL_DISPLAY_H
#define NORMAL_DISPLAY_H

#include "../Global.h"
#include "../IDisplayDirector.h"
#include "../IDisplay.h"

/**
 * @brief 派生类: 普通显示负责人
 *
 */
class NormalDisplay : public IDisplayDirector
{
private:
    IDisplay *displayImpl = nullptr; //具体的显示者

public:
    NormalDisplay(IDisplay *displayImpl);
    ~NormalDisplay() = default;
    virtual void open() override;    //开始,实现open()函数
    virtual void print() override;   //打印,实现print()函数
    virtual void close() override;   //关闭,实现close()函数
    virtual void display() override; //负责显示逻辑,实现display()函数
};
#endif