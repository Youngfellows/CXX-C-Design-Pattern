#ifndef IPERSON_H
#define IPERSON_H

#include "./IState.h"

//先声明类,后面再定义
class IState;

/**
 * @brief 抽象类: 游戏人抽象类
 *
 */
class IPerson
{
public:
    virtual ~IPerson() = default;
    virtual void onKeyDown() = 0;
    virtual void onKeyUp() = 0;
    virtual void moveOn() = 0;
    virtual void setState(IState *state) = 0;
};

#endif