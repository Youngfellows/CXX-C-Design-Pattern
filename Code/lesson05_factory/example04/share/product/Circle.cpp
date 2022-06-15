#include "../../include/product/Circle.h"

Circle::Circle()
{
    cout << "Circle()构造函数" << endl;
}

Circle::Circle(float x,float y,float radius)
{
    cout << "Circle()有参数构造函数" << endl;
    this->x = x;
    this->y = y;
    this->radius = radius;
}

Circle::~Circle()
{
    cout << "~Circle()析构函数" << endl;
}

void Circle::draw()//覆写draw()函数
{
    cout << "以圆心(" << this->x << "," << this->y << ")绘制半径为" << this->radius << "的圆形" << endl;
}

double Circle::area()//覆写area()函数
{
   cout << "Circle::area():: ..." << endl;
   return  PI * this->radius * this->radius;
}
