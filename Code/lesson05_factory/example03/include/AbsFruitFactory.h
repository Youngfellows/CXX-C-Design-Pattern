#ifndef ABS_FRUIT_FACTORY_H
#define ABS_FRUIT_FACTORY_H

#include "./Global.h"
#include "./Fruit.h"

/**
 * @brief 抽象工厂模式 - 生产水果的工厂 - 生产的是一个产品族
 * 
 */
class AbsFruitFactory
{
    public:
        /**
         * @brief 析构函数
         * 
         */
       virtual ~AbsFruitFactory();

       /**
        * @brief 根据类型生产产品 - 创建苹果
        * 
        * @return Fruit* 水果指针变量
        */
       virtual Fruit * createApple() = 0;
       
        /**
        * @brief 根据类型生产产品 - 创建香蕉
        * 
        * @return Fruit* 水果指针变量
        */
       virtual Fruit * createBanana() = 0;
};
#endif