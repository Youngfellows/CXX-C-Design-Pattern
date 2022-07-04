#ifndef PC_MESSAGER_IMPL_H
#define PC_MESSAGER_IMPL_H

#include "../Global.h"
#include "../MessagerImp.h"

/**
 * @brief 派生类: PC端实现
 *
 */
class PCMessagerImpl : public MessagerImp
{
public:
    PCMessagerImpl() = default;
    ~PCMessagerImpl() = default;
    virtual void playSound() override; //实现playSound()函数
    virtual void drawShape() override; //实现drawShape()函数
    virtual void writeText() override; //实现writeText()函数
    virtual void connect() override;   //实现connect()函数
};
#endif