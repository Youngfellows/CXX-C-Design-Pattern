#ifndef MEAL_BUILDER_H
#define MEAL_BUILDER_H

#include "../IMealBuilder.h"
#include "../product/ChickenBurger.h"
#include "../product/VegBurger.h"
#include "../product/Coke.h"
#include "../product/Pesi.h"
#include "../product/Meal.h"

/**
 * @brief 派生类: 美食建造者
 *
 */
class MealBuilder : public IMealBuilder
{
public:
    MealBuilder() = default;
    ~MealBuilder() = default;
    virtual std::shared_ptr<IMeal> prepareVegMeal() override;    //实现prepareVegMeal()函数
    virtual std::shared_ptr<IMeal> prepareNonVegMeal() override; //实现prepareNonVegMeal()函数
};
#endif