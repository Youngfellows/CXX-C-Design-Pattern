#ifndef VEG_BURGER_H
#define VEG_BURGER_H

#include "../Burger.h"

/**
 * @brief 派生类: 蔬菜汉堡
 *
 */
class VegBurger : public Burger
{

public:
    VegBurger() = default;
    ~VegBurger() = default;
    virtual std::string name() override; //实现name()函数
    virtual float price() override;      //实现price()函数
};
#endif