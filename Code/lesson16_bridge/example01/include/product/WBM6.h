#ifndef WBM6_H
#define WBM6_H

#include "../Car.h"

/**
 * @brief 派生类: 宝马6系车
 *
 */
class WBM6 : public Car
{
public:
    WBM6(Engine *engine);
    ~WBM6();
    virtual void installEngine() override; //实现installEngine()函数
};
#endif