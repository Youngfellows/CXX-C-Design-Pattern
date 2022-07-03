#ifndef ENGINE_4500CC_H
#define ENGINE_4500CC_H

#include "../Global.h"
#include "../Engine.h"

/**
 * @brief 派生类: 4500cc型号发动机
 *
 */
class Engine4500cc : public Engine
{
public:
    Engine4500cc() = default;
    ~Engine4500cc() = default;
    virtual void installEngine() override; //实现installEngine()函数
};
#endif