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
        static ShapeFactory * mInstance;//声明单例
        std::map<string,std::shared_ptr<Circle>> circles;//声明Circle集合 

    private:
        ShapeFactory();//私有构造函数

    public:
        ~ShapeFactory();//默认析构函数
        static std::shared_ptr<std::mutex> mMutex;//声明互斥量
        static ShapeFactory * getInstance();//声明获取单例方法

        /**
         * @brief 更加color颜色获取形状
         * 
         * @param color 颜色
         * @return std::shared_ptr<Circle> 返回形状指针
         */
        std::shared_ptr<Circle> getCircle1(string color);

        /**
         * @brief 更加color颜色获取形状
         * 
         * @param color 颜色
         * @return std::shared_ptr<Circle> 返回形状指针
         */
        std::shared_ptr<Circle> getCircle2(string color);
};

#endif