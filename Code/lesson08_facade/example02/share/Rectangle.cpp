#include "../include/Rectangle.h"

Rectangle::Rectangle(double length,double width)
{
    cout << "Rectangle()构造函数" << endl;
    this->length = length;
    this->width = width;
}

Rectangle::~Rectangle()
{
    cout << "~Rectangle()析构函数" << endl;
}

void Rectangle::draw()
{
    cout << "Rectangle::draw():: 以长宽(" << this->length << "," << this->width << ")绘制矩形" << endl;
}

double Rectangle::area()
{
    return this->length * this->width;
}