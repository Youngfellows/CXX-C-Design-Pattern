#include "../include/BodyCarHandle.h"

BodyCarHandle::BodyCarHandle()
{
    cout << "BodyCarHandle()构造函数" << endl;
}

BodyCarHandle::~BodyCarHandle()
{
    cout << "~BodyCarHandle()析构函数" << endl;
}

//覆写handleCar()函数
void BodyCarHandle::handleCar()
{
    cout << "HeadCarHandle::handleCar():: 造车身" << endl;
    cout << "BodyCarHandle::handleCar():: nextCarHandle:" << this->nextCarHandle << endl;
    if(this->nextCarHandle != nullptr)
    {
        this->nextCarHandle->handleCar();
    }
}