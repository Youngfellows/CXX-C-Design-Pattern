#ifndef OLD_CLASS_H
#define OLD_CLASS_H

#include "./Global.h"
#include "./IAdaptee.h"

/**
 * @brief 派生类: 遗留类型
 * 
 */
class OldClass : public IAdaptee
{
    public:
        OldClass() = default;
        ~OldClass() = default;
        virtual void foo(int data) override;//实现foo()函数
        virtual int bar() override;//实现bar()函数
};
#endif