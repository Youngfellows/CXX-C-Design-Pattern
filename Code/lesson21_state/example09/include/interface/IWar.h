#ifndef IWAR_H
#define IWAR_H

#include "../Global.h"
#include "./IState.h"

//先声明类,后面再定义
class IState;

/**
 * @brief 抽象类: 战争抽象类
 *
 */
class IWar
{
public:
    virtual ~IWar() = default;
    virtual void setState(std::shared_ptr<IState> state) = 0; //设置状态
    virtual void getState() = 0;                              //获取状态
    virtual void setDays(int days) = 0;                       //设置天数
    virtual int getDays() = 0;
};

#endif