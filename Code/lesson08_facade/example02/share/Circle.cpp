#include "../include/Circle.h"

Circle::Circle(double x,double y,double radius)
{
    cout << "Circle()构造函数" << endl;
    this->x = x;
    this->y = y;
    this->radius = radius;
}

Circle::~Circle()
{
    cout << "~Circle()析构函数" << endl;
}

void Circle::draw()
{
    cout << " Circle::draw():: 以圆心(" << this->x << "," << this->y << "),半径为" << this->radius << "画圆形" << endl;
}

double Circle::area()
{
    return this->radius * this->radius * PI;
}
