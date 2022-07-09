#ifndef ICONTEXT_H
#define ICONTEXT_H

#include "../Global.h"

class IContext
{
public:
    virtual ~IContext() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置变量和变量值
     *
     * @param variable 变量名
     * @param value 变量值
     */
    virtual void set(char variable, int value) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 根据变量名返回变量值
     *
     * @param variable 变量名
     * @return int 返回变量值
     */
    virtual int get(char variable) = 0;
};

#endif