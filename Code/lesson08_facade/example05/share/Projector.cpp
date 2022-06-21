#include "../include/Projector.h"

Projector::Projector()
{
    cout << "Projector()构造函数" << endl;
}

Projector::~Projector()
{
    cout << "~Projector()析构函数" << endl;
}

void Projector::openScreen()
{
    cout << "Projector::openScreen():: 打开荧幕 ..." << endl;
}

void Projector::setViewport()
{
    cout << "Projector::setViewport():: 设置视窗 ..." << endl;
}

void Projector::closeScreen()
{
    cout << "Projector::closeScreen():: 关闭荧幕 ..." << endl;
}