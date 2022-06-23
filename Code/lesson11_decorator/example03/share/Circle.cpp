#include "../include/Circle.h"

Circle::Circle(double x,double y,double r)
{
    cout << "Circle()构造函数" << endl;
    this->x = x;
    this->y = y;
    this->radius = r;
}

void Circle::draw()
{
    cout << "以圆心(" << this->x << "," << this->y << "),半径:" << this->radius << ",绘制圆形 ..." << endl;
}

double Circle::area()
{
    return this->radius * this->radius * PI;
}