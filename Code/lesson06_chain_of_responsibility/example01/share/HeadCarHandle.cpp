#include "../include/HeadCarHandle.h"

HeadCarHandle::HeadCarHandle()
{
    cout << "HeadCarHandle()构造函数" << endl;
}

HeadCarHandle::~HeadCarHandle()
{
    cout << "~HeadCarHandle()析构函数" << endl;
}

//覆写handleCar()函数
void HeadCarHandle::handleCar()
{
    cout << "HeadCarHandle::handleCar():: 造车头" << endl;
    if(this->nextCarHandle != nullptr)
    {
        this->nextCarHandle->handleCar();
    }
}