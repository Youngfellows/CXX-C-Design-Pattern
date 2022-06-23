#include "../include/ShapeDecorator.h"

ShapeDecorator::ShapeDecorator(std::shared_ptr<Shape> shape)
{
    cout << "ShapeDecorator()构造函数" << endl;
    this->shape = shape;
    //this->shape.swap(shape);
}

ShapeDecorator::~ShapeDecorator()
{
    cout << "~ShapeDecorator()析构函数" << endl;
    if(this->shape != nullptr)
    {
        this->shape = nullptr;
    } 
}

void ShapeDecorator::draw()
{
    cout << "ShapeDecorator::draw():: ..." << endl;
    this->shape->draw();
}

double ShapeDecorator::area()
{
    cout << "ShapeDecorator::area():: ..." << endl;
    return this->shape->area();
}