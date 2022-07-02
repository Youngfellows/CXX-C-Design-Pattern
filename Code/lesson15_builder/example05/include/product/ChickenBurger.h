#ifndef CHICKEN_BURGER_H
#define CHICKEN_BURGER_H

#include "../Burger.h"

/**
 * @brief 派生类: 鸡肉汉堡
 *
 */
class ChickenBurger : public Burger
{

public:
    ChickenBurger() = default;
    ~ChickenBurger() = default;
    virtual std::string name() override; //实现name()函数
    virtual float price() override;      //实现price()函数
};
#endif