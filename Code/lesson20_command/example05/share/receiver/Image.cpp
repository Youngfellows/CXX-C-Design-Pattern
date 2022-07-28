#include "../../include/receiver/Image.h"

Image::Image(double width, double heigth)
{
    cout << "Image()构造函数" << endl;
    this->width = width;
    this->heigth = heigth;
}

Image::~Image()
{
    cout << "~Image()析构函数" << endl;
}

void Image::scale(double fltScale)
{
    if (fltScale > 0)
    {
        this->width = this->width * fltScale;
        this->heigth = this->heigth * fltScale;
    }
}

void Image::display()
{
    cout << "图片信息,长:" << this->width << ",宽:" << this->heigth << endl;
}