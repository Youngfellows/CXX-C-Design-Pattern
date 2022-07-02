#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //建造者模式
    std::shared_ptr<IMealBuilder> mealBuilder = std::make_shared<MealBuilder>(); //美食创建者
    std::shared_ptr<IMeal> meal = mealBuilder->prepareVegMeal();                 //创建蔬菜美食商品
    meal->showItems();                                                           //显示美食信息
    float cost = meal->getCost();                                                //总价
    cout << "总价:" << cost << endl;

    cout << "===================================" << endl;

    meal = mealBuilder->prepareNonVegMeal(); //创建非蔬菜美食商品
    meal->showItems();                       //显示美食信息
    cost = meal->getCost();                  //总价
    cout << "总价:" << cost << endl;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}