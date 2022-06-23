#include "../include/GreenShapeDecorator.h"

/**
 * @brief 构造函数,初始化父类属性
 * 
 * @param shape 被装饰的形状
 */
GreenShapeDecorator::GreenShapeDecorator(std::shared_ptr<Shape> shape) : ShapeDecorator(shape)
{
    cout << "GreenShapeDecorator()构造函数" << endl;
}

void GreenShapeDecorator::draw()
{
    cout << "GreenShapeDecorator::draw():: ..." << endl;
    //调用父类的函数
    ShapeDecorator::draw();
    //调用自身特有函数
    this->fillGreen();
}

double GreenShapeDecorator::area()
{
    cout << "RedShapeDecorator::area():: ..." << endl;
    //调用父类函数
    return ShapeDecorator::area();
}

void GreenShapeDecorator::fillGreen()
{
    cout << "RedShapeDecorator::setRedBorder():: 填充绿色 ..." << endl;
}