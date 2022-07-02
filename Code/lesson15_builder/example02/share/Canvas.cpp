#include "../include/Canvas.h"

Canvas::Canvas(double length, double width)
{
    this->length = length;
    this->width = width;
}

void Canvas::use()
{
    cout << "Canvas::use():: 画布长:" << this->length << ",画布宽:" << this->width << endl;
}
