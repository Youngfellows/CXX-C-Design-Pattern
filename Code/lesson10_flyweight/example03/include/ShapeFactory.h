#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H

#include "./Shape.h"
#include "./Circle.h"

/**
 * @brief 保存图形信息的工厂
 * 
 */
class ShapeFactory
{
    private:
        static std::map<string,std::shared_ptr<Circle>> circles;//声明Circle集合

    public:
        ShapeFactory() = default;//默认构造函数
        ~ShapeFactory() = default;//默认析构函数

        /**
         * @brief 更加color颜色获取形状
         * 
         * @param color 颜色
         * @return std::shared_ptr<Circle> 返回形状指针
         */
        static std::shared_ptr<Circle> getCircle1(string color);

        /**
         * @brief 更加color颜色获取形状
         * 
         * @param color 颜色
         * @return std::shared_ptr<Circle> 返回形状指针
         */
        static std::shared_ptr<Circle> getCircle2(string color);
};

#endif