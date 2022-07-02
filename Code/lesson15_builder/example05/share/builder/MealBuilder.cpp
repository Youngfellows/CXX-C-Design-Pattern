#include "../../include/builder/MealBuilder.h"

/**
 * @brief 制作蔬菜美食
 *
 * @return std::shared_ptr<IMeal>
 */
std::shared_ptr<IMeal> MealBuilder::prepareVegMeal()
{
    std::shared_ptr<IMeal> meal = std::make_shared<Meal>(); //点美食
    meal->addFood(std::make_shared<VegBurger>());           //蔬菜汉堡
    meal->addFood(std::make_shared<Coke>());                //可口可乐
    return meal;
}

/**
 * @brief 制作无蔬菜美食
 *
 * @return std::shared_ptr<IMeal>
 */
std::shared_ptr<IMeal> MealBuilder::prepareNonVegMeal()
{
    std::shared_ptr<IMeal> meal = std::make_shared<Meal>(); //点美食
    meal->addFood(std::make_shared<ChickenBurger>());       //鸡肉汉堡
    meal->addFood(std::make_shared<Pesi>());                //百事可乐
    return meal;
}
