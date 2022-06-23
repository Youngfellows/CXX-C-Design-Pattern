#include "../include/RedShapeDecorator.h"

/**
 * @brief 构造函数,初始化父类属性
 * 
 * @param shape 被装饰的形状
 */
RedShapeDecorator::RedShapeDecorator(std::shared_ptr<Shape> shape) : ShapeDecorator(shape)
{
    cout << "RedShapeDecorator()构造函数" << endl;
}

void RedShapeDecorator::draw()
{
    cout << "RedShapeDecorator::draw():: ..." << endl;
    //调用父类的函数
    ShapeDecorator::draw();
    //调用自身特有函数
    this->setRedBorder();
}

double RedShapeDecorator::area()
{
    cout << "RedShapeDecorator::area():: ..." << endl;
    //调用父类函数
    return ShapeDecorator::area();
}

void RedShapeDecorator::setRedBorder()
{
    cout << "RedShapeDecorator::setRedBorder():: 设置红色的边框 ..." << endl;
}