#ifndef ICONTEXT_H
#define ICONTEXT_H

#include "./IState.h"

//先声明类,后面再定义
class IState;

class IContext
{
public:
    virtual ~IContext() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置状态
     * @param state
     */
    virtual void setState(IState *state) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取状态
     * @return IState*
     */
    virtual IState *getState() = 0;
};

#endif