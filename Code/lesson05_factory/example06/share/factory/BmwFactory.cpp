#include "../../include/factory/BmwFactory.h"

BmwFactory::BmwFactory()
{
    cout << "BmwFactory()构造函数" << endl;
}

BmwFactory::~BmwFactory()
{
    cout << "BmwFactory()析构函数" << endl;
}

/**
 * @brief 生产宝马车
 * 
 * @return std::unique_ptr<ICar> 返回宝马车指针变量
 */
std::unique_ptr<ICar> BmwFactory::createCar()
{
   return std::make_unique<BmwCar>();
}

/**
 * @brief 生产宝马自行车
 * 
 * @return std::unique_ptr<IBike> 返回宝马自行车指针变量
 */
std::unique_ptr<IBike> BmwFactory::createBike()
{
    return std::make_unique<BmwBike>();
}