#include "../include/ProxyImage.h"

ProxyImage::ProxyImage(std::shared_ptr<Image> image)
{
    cout << "ProxyImage()构造函数" << endl;
    this->image = image;
}

ProxyImage::~ProxyImage()
{
    cout << "~ProxyImage()析构函数" << endl;
}

void ProxyImage::display()
{
    this->image->display();
}