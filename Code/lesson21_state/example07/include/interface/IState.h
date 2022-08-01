#ifndef ISTATE_H
#define ISTATE_H

#include "./IPerson.h"

//先声明类,后面再定义
class IPerson;

/**
 * @brief 抽象类: 状态抽象类
 *
 */
class IState
{
public:
    virtual ~IState() = default;
    virtual void down(IPerson *person) = 0;   //下一个状态
    virtual void up(IPerson *person) = 0;     //上一个状态
    virtual void action(IPerson *person) = 0; //当前状态做某事
};

#endif