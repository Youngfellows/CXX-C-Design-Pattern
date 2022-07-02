#include "../../include/product/Meal.h"

Meal::Meal()
{
    cout << "Meal()" << endl;
    this->products = std::make_shared<std::list<std::shared_ptr<Item>>>();
}

Meal::~Meal()
{
    cout << "~Meal()析构函数" << endl;
    if (this->products != nullptr)
    {
        // if (this->products->empty())
        // {
        //     this->products->clear();
        // }
        for (auto iter = this->products->begin(); iter != this->products->end(); iter++)
        {
            auto product = *iter;
            product = nullptr;
        }
        this->products->clear();
    }
    this->products = nullptr;
}

void Meal::addFood(std::shared_ptr<Item> item)
{
    this->products->push_back(item);
}

/**
 * @brief 显示商品信息
 *
 */
void Meal::showItems()
{
    cout << "Meal::showItems():: ..." << endl;
    for (auto iter = this->products->begin(); iter != this->products->end(); iter++)
    {
        auto product = *iter;
        std::shared_ptr<Packing> packing = product->packingItem(); //获取包装器
        std::string pack = packing->pack();                        //获取包装器
        std::string foodName = product->name();                    //食品名称
        float price = product->price();                            //单价
        cout << "食品:" << foodName << endl;
        cout << "包装:" << pack << endl;
        cout << "单价:" << price << endl;
    }
}

/**
 * @brief 返回商品总价
 *
 * @return float 返回商品总价
 */
float Meal::getCost()
{
    cout << "Meal::getCost():: ..." << endl;
    float cost = 0.0f;
    for (auto iter = this->products->begin(); iter != this->products->end(); iter++)
    {
        auto product = *iter;
        cost += product->price(); //总价
    }
    return cost;
}
