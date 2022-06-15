#include "../../include/factory/BenzFactory.h"

BenzFactory::BenzFactory()
{
    cout << "BenzFactory()构造函数" << endl;
}

BenzFactory::~BenzFactory()
{
    cout << "BenzFactory()析构函数" << endl;
}

/**
 * @brief 生产奔驰车
 * 
 * @return std::unique_ptr<ICar> 返回奔驰车指针变量
 */
std::unique_ptr<ICar> BenzFactory::createCar()
{
   return std::make_unique<BenzCar>();
}

/**
 * @brief 生产奔驰自行车
 * 
 * @return std::unique_ptr<IBike> 返回奔驰自行车指针变量
 */
std::unique_ptr<IBike> BenzFactory::createBike()
{
    return std::make_unique<BenzBike>();
}