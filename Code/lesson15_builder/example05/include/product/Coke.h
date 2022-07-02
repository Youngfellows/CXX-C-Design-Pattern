#ifndef COKE_H
#define COKE_H

#include "../ColdDrink.h"

/**
 * @brief 派生类: 可口可乐
 *
 */
class Coke : public ColdDrink
{

public:
    Coke() = default;
    ~Coke() = default;
    virtual std::string name() override; //实现name()函数
    virtual float price() override;      //实现price()函数
};
#endif