#ifndef MEAL_H
#define MEAL_H

#include "../IMeal.h"

/**
 * @brief 派生类: 点美食
 *
 */
class Meal : public IMeal
{
private:
    std::shared_ptr<std::list<std::shared_ptr<Item>>> products = nullptr; //商品容器列表

public:
    Meal();
    ~Meal();
    virtual void addFood(std::shared_ptr<Item> item) override; //实现addFood()函数
    virtual void showItems() override;                         //实现showItems()函数
    virtual float getCost() override;                          //实现getCost()函数
};
#endif