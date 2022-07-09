#ifndef ICONTEXT_H
#define ICONTEXT_H

#include "../Global.h"

/**
 * @brief 抽象类: 抽象上下文环境
 *
 */
class IContext
{
public:
    virtual ~IContext() = default;
    virtual void set(std::string key, bool value) = 0;
    virtual bool get(std::string key) = 0;
};

#endif