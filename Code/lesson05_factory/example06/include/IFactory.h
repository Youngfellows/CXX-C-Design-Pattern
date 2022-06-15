#ifndef IFACTORY_H
#define IFACTORY_H

#include "./ICar.h"
#include "./IBike.h"
#include "./FactoryType.h"

//先声明类 - 后面再定义
// class AudiFactory;
// class BenzFactory;
// class BmwFactory;

/**
 * @brief 抽象工厂类: 抽象工厂生产产品族
 * 
 */
class IFactory
{
    public:
        /**
         * @brief 析构函数
         * 
         */
        virtual ~IFactory();

        /**
         * @brief 生产车
         * 
         * @return std::unique_ptr<ICar> 返回生产的车指针变量
         */
        virtual std::unique_ptr<ICar> createCar() = 0;

        /**
         * @brief 生产自行车
         * 
         * @return std::unique_ptr<IBike> 返回生产的自行车指针变量
         */
        virtual std::unique_ptr<IBike> createBike() = 0;
};
#endif