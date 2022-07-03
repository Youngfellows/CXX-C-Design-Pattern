#include "../include/Shape.h"

Shape::Shape(Paint *paint)
{
    cout << "Shape()构造函数" << endl;
    this->paint = paint;
}

/**
 * @brief 显示图形
 *
 */
void Shape::show()
{
    // cout << "Shape::show():: ..." << endl;
    this->paint->draw();
}
