#include "../include/Shape.h"

Shape::Shape(std::shared_ptr<DrawCircleAPI> drawApi)
{
    cout << "Shape()构造函数" << endl;
    this->drawApi = drawApi;
}