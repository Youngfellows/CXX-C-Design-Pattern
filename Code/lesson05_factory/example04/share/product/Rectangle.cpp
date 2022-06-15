#include "../../include/product/Rectangle.h"

Rectangle::Rectangle()
{
    cout << "Rectangle()构造函数" << endl;
}

Rectangle::Rectangle(float w,float l)
{
    cout << "Rectangle()有参数构造函数" << endl;
    this->width = w;
    this->length = l;
}

Rectangle::~Rectangle()
{
    cout << "~Rectangle()析构函数" << endl;
}

void Rectangle::draw()//覆写draw()函数
{
    cout << "以长宽(" << this->width << "," << this->length << ")绘制矩形" << endl;
}

double Rectangle::area()//覆写area()函数
{
   cout << "Rectangle::area():: ..." << endl;
   return  this->width * this->length;
}
