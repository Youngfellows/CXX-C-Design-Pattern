#ifndef ICONTEXT_H
#define ICONTEXT_H

#include "../Global.h"

class IContext
{
public:
    virtual ~IContext() = default;
    virtual void set(std::string cmd) = 0;
    virtual std::string get() = 0;
};
#endif