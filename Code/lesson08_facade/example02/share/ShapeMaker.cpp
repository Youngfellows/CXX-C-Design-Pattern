#include "../include/ShapeMaker.h"

ShapeMaker::ShapeMaker()
{
    cout << "ShapeMaker()构造函数" << endl;
    this->circle = new Circle(3.5,4.8,5);
    this->rectangle = new Rectangle(6,12);
    this->square = new Square(7);
}

ShapeMaker::~ShapeMaker()
{
    cout << "~ShapeMaker()析构函数" << endl;
    //释放内存
    delete this->circle;
    delete this->rectangle;
    delete this->square;
    this->circle = nullptr;
    this->rectangle = nullptr;
    this->square = nullptr;
}

void ShapeMaker::drawCircle()
{
    this->circle->draw();
    double area_ = this->circle->area();
    cout << "圆形的面积:" << area_ << endl;
}

void ShapeMaker::drawRectangle()
{
    this->rectangle->draw();
    double area_ = this->rectangle->area();
    cout << "矩形的面积:" << area_ << endl;
}

void ShapeMaker::drawSquare()
{
    this->square->draw();
    double area_ = this->square->area();
    cout << "正方形的面积:" << area_ << endl;
}