#include "../../include/product/Rect.h"

Rect::Rect(Paint *paint) : Shape(paint)
{
    cout << "Rect()构造函数" << endl;
}

void Rect::show()
{
    Shape::show(); //调用父类的方法
    cout << "Rect::show():: 矩形 ..." << endl;
}
