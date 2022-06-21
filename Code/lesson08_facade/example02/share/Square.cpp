#include "../include/Square.h"

Square::Square(double length)
{
    cout << "Square()构造函数" << endl;
    this->length = length;
}

Square::~Square()
{
    cout << "~Square()析构函数" << endl; 
}

void Square::draw() 
{
    cout << "Square::draw():: 以边长为(" << this->length << "," << this->length << ")或者正方形" << endl;
}

double Square::area()
{
    return this->length * this->length;
}
