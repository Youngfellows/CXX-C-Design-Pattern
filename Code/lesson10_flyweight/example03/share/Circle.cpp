#include "../include/Circle.h"

Circle::Circle()
{
    cout << "Circle()无参数构造函数" << endl;
}


Circle::Circle(string color)
{
    cout << "Circle()构造函数" << endl;
    this->color = color;
}

Circle::~Circle()
{
    cout << "~Circle()析构函数" << endl;
}

void Circle::setX(double x)
{
    this->x = x;
}

void Circle::setY(double y)
{
    this->y = y;
}

void Circle::setRadius(double radius)
{
    this->radius = radius;
}

void Circle::draw()
{
    cout << "Circle::draw():: 以圆心(" << this->x << "," << this->y << "),半径为" << this->radius << "绘制" << this->color << "的圆形" << endl;
}
