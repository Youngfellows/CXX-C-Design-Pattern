#ifndef ISHAPE_H
#define ISHAPE_H

#include "./Global.h"

/**
 * @brief 抽象产品: 形状
 * 
 */
class IShape
{
    public:
        /**
         * @brief 析构函数
         * 
         */
        virtual ~IShape();

        /**
         * @brief 绘制形状 - 纯虚函数 - 抽象接口 - 子类必须实现
         * 
         */
        virtual void draw() = 0;

        /**
         * @brief 求面积 - 纯虚函数 - 抽象接口 - 子类必须实现
         * 
         * @return double 返回求出的面积
         */
        virtual double area() = 0;
};
#endif