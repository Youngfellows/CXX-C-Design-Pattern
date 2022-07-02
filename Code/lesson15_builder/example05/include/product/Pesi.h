#ifndef PESI_H
#define PESI_H

#include "../ColdDrink.h"

/**
 * @brief 派生类: 百事可乐
 *
 */
class Pesi : public ColdDrink
{

public:
    Pesi() = default;
    ~Pesi() = default;
    virtual std::string name() override; //实现name()函数
    virtual float price() override;      //实现price()函数
};
#endif