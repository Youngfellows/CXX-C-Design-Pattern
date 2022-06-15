#ifndef CIRCLE_FACTORY_H
#define CIRCLE_FACTORY_H

#include "../IShapeFactory.h"
#include "../product/Circle.h"

/**
 * @brief 具体工厂: 生产圆形的工厂
 * 
 */
class CircleFactory : public IShapeFactory
{
    private:
        float x;//x坐标
        float y;//y坐标
        float radius;//半径

    public:
        CircleFactory();
        CircleFactory(float x,float y,float radius);
        ~CircleFactory();
        virtual std::shared_ptr<IShape> create() override;//覆写create()函数
};

#endif