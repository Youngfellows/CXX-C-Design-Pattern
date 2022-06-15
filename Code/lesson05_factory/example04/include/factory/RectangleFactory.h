#ifndef RECTANGLE_FACTORY_H
#define RECTANGLE_FACTORY_H

#include "../IShapeFactory.h"
#include "../product/Rectangle.h"

/**
 * @brief 具体工厂: 生产矩形的工厂
 * 
 */
class RectangleFactory : public IShapeFactory
{
    private:
        float width;//长
        float length;//宽

    public:
        RectangleFactory();
        RectangleFactory(float width,float length);
        ~RectangleFactory();
        virtual std::shared_ptr<IShape> create() override;//覆写create()函数
};

#endif