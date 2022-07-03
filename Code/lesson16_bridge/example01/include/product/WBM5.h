#ifndef WBM5_H
#define WBM5_H

#include "../Car.h"

/**
 * @brief 派生类: 宝马5系车
 *
 */
class WBM5 : public Car
{
public:
    WBM5(Engine *engine);
    ~WBM5();
    virtual void installEngine() override; //实现installEngine()函数
};
#endif