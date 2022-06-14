#ifndef FRUIT_H
#define FRUIT_H

#include "./Global.h"

/**
 * @brief 抽象产品类 - 水果
 * 
 */
class Fruit
{
    public:

        /**
         * @brief 析构函数
         * 
         */
        virtual ~Fruit();

        /**
         * @brief 返回水果名称 - 纯虚函数
         * 
         * @return string 返回水果名称
         */
        virtual string fruit() = 0;

        /**
         * @brief 水果单价 - 纯虚函数
         * 
         * @return double 返回水果单价
         */
        virtual double price() = 0;
};
#endif