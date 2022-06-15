#ifndef ISHAPE_FACTORY_H
#define ISHAPE_FACTORY_H

#include "./Global.h"
#include "./IShape.h"

/**
 * @brief 抽象工厂类: 生产Shape
 * 
 */
class IShapeFactory
{
    public:

        /**
         * @brief 析构函数
         * 
         */
       virtual ~IShapeFactory();

       /**
        * @brief 
        * 
        * @return std::shared_ptr<IShape> 返回IShape的指针
        */
       virtual std::shared_ptr<IShape> create() = 0;
};
#endif