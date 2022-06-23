#include "../include/Rectangle.h"

Rectangle::Rectangle(double w,double l)
{
    cout << "Rectangle()构造函数" << endl;
    this->width = w;
    this->length = l;
}

void Rectangle::draw()
{
    cout << "以长宽(" << this->length << "," << this->width << ")绘制矩形形 ..." << endl;
}

double Rectangle::area()
{
    return this->length * this->width;
}