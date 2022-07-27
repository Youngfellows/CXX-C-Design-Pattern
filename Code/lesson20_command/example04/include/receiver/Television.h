#ifndef TELEVISION_H
#define TELEVISION_H

#include "../Global.h"
#include "../interface/ITelevision.h"

/**
 * @brief 派生类: 电视接收者
 *
 */
class Television : public ITelevision
{
private:
public:
    Television();
    ~Television();
    virtual void open() override;          //实现open()函数
    virtual void close() override;         //实现close()函数
    virtual void changeChannel() override; //实现changeChannel()函数
};
#endif