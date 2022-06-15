#include "../../include/product/Square.h"

Square::Square()
{
    cout << "Square()构造函数" << endl;
}

Square::Square(float l)
{
    cout << "Square()有参数构造函数" << endl;
    this->length = l;
}

Square::~Square()
{
    cout << "~Square()析构函数" << endl;
}

void Square::draw()//覆写draw()函数
{
    cout << "以边长(" << this->length << "," << this->length << ")绘制正方形" << endl;
}

double Square::area()//覆写area()函数
{
   cout << "Square::area():: ..." << endl;
   return  this->length * this->length;
}
