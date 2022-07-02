#include "../include/Director.h"

Director::Director(std::shared_ptr<IBuilder> builder)
{
    cout << "Director()构造函数" << endl;
    this->builder = builder;
}

Director::~Director()
{
    cout << "~Director()析构函数" << endl;
    if (this->builder != nullptr)
    {
        this->builder = nullptr;
    }
}

/**
 * @brief 负责创建产品并返回创建好的产品
 *
 * @return std::shared_ptr<Product> 返回创建好的产品
 */
std::shared_ptr<Product> Director::construct()
{
    cout << "Director::construct():: start ..." << endl;
    this->builder->buildRiceNoddles();
    this->builder->buildCoolDish();
    this->builder->buildDrink();
    cout << "Director::construct():: end ..." << endl;
    return this->builder->getProdect();
}