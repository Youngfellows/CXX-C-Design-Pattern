#ifndef MOBILE_MESSAGER_IMPL_H
#define MOBILE_MESSAGER_IMPL_H

#include "../Global.h"
#include "../MessagerImp.h"

/**
 * @brief 派生类: 移动端平台实现
 *
 */
class MobileMessagerImpl : public MessagerImp
{
public:
    MobileMessagerImpl() = default;
    ~MobileMessagerImpl() = default;
    virtual void playSound() override; //实现playSound()函数
    virtual void drawShape() override; //实现drawShape()函数
    virtual void writeText() override; //实现writeText()函数
    virtual void connect() override;   //实现connect()函数
};
#endif