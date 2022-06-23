#ifndef BEVERAGE_H
#define BEVERAGE_H

#include "./Global.h"

/**
 * @brief 抽象类: 咖啡类饮品
 * 
 */
class Beverage
{
    public:
        Beverage() = default;//默认构造函数
        virtual ~Beverage() = default;//默认析构函数

        /**
         * @brief 获取描述
         * 
         * @return string 返回咖啡饮品的描述
         */
        virtual string getDescription();

        /**
         * @brief 纯虚函数,抽象接口: 售价
         * 
         * @return double 返回咖啡饮品的售价
         */
        virtual double cost() = 0;
};
#endif