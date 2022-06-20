#include "../include/RealImage.h"

RealImage::RealImage(string fileName)
{
    cout << "RealImage()构造函数" << endl;
    this->fileName = fileName;
    this->loadFromDisk(this->fileName);
}

RealImage::~RealImage()
{
    cout << "~RealImage()析构函数" << endl;
}

void RealImage::display()
{
    cout << "RealImage::" << __FUNCTION__ << "():: 显示图片:" << this->fileName << endl;
}

void RealImage::loadFromDisk(string fileName)
{
    cout << "RealImage::" << __FUNCTION__ << "():: 从磁盘加载图片:" << this->fileName << endl; 
}