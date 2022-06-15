#include "../../include/factory/AudiFactory.h"

AudiFactory::AudiFactory()
{
    cout << "AudiFactory()构造函数" << endl;
}

AudiFactory::~AudiFactory()
{
    cout << "AudiFactory()析构函数" << endl;
}

/**
 * @brief 生产奔驰车
 * 
 * @return std::unique_ptr<ICar> 返回奔驰车指针变量
 */
std::unique_ptr<ICar> AudiFactory::createCar()
{
   return std::make_unique<AudiCar>();
}

/**
 * @brief 生产奔驰自行车
 * 
 * @return std::unique_ptr<IBike> 返回奔驰自行车指针变量
 */
std::unique_ptr<IBike> AudiFactory::createBike()
{
    return std::make_unique<AudiBike>();
}