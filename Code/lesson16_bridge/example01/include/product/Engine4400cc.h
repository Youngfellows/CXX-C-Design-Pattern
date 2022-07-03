#ifndef ENGINE_4400CC_H
#define ENGINE_4400CC_H

#include "../Global.h"
#include "../Engine.h"

/**
 * @brief 派生类: 4400cc型号发动机
 *
 */
class Engine4400cc : public Engine
{
public:
    Engine4400cc() = default;
    ~Engine4400cc() = default;
    virtual void installEngine() override; //实现installEngine()函数
};
#endif