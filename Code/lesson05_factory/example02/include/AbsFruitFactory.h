#ifndef ABS_FRUIT_FACTORY_H
#define ABS_FRUIT_FACTORY_H

#include "./Global.h"
#include "./Fruit.h"

/**
 * @brief 抽象工厂类 - 生产水果的工厂
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
        * @brief 根据类型生产产品 - 创建水果
        * 
        * @param type 类型
        * @return Fruit* 水果指针变量
        */
       virtual Fruit * create() = 0;
       
};
#endif