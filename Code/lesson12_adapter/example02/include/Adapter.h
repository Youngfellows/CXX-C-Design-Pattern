#ifndef ADAPTER_H
#define ADAPTER_H

#include "./Global.h"
#include "./ITarget.h"
#include "./IAdaptee.h"
#include "./OldClass.h"

/**
 * @brief 类适配器
 * @brief 私有继承OldClass,公有实现ITarget接口
 */
class Adapter : public ITarget ,private OldClass
{
    public:
        Adapter() = default;
        ~Adapter() = default;
        virtual void process() override;//实现process()函数
};
#endif