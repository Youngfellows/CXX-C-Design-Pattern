#ifndef PS2ER_H
#define PS2ER_H

#include "./Global.h"
#include "./PS2.h"

/**
 * @brief 派生类: PS2接口实现类
 * 
 */
class PS2er : public PS2
{
    public:
        PS2er() = default;
        ~PS2er() = default;
        virtual void isPS2() override;//实现isPS2()函数
};
#endif