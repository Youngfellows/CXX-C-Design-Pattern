#include "../../include/product/Circle.h"

Circle::Circle(Paint *paint) : Shape(paint)
{
    cout << "Circle()构造函数" << endl;
}

void Circle::show()
{
    Shape::show(); //调用父类的方法
    cout << "Circle::show():: 圆形 ..." << endl;
}