#include "../include/CanvasDecorator.h"

CanvasDecorator::CanvasDecorator(Canvas* cvs)
{
    cout << "CanvasDecorator()构造函数" << endl;
    this->canvas = cvs;
}

CanvasDecorator::~CanvasDecorator()
{
    cout << "~CanvasDecorator()析构函数" << endl;
    if(this->canvas != nullptr)
    {
        delete this->canvas;
        this->canvas = nullptr;
    }
}

void CanvasDecorator::draw()
{
    cout << "CanvasDecorator::draw():: ..." << endl;
    this->canvas->draw();
}
