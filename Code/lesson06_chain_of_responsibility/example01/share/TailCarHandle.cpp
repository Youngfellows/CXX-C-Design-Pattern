#include "../include/TailCarHandle.h"

TailCarHandle::TailCarHandle()
{
    cout << "TailCarHandle()构造函数" << endl;
}

TailCarHandle::~TailCarHandle()
{
    cout << "~TailCarHandle()析构函数" << endl;
}

//覆写handleCar()函数
void TailCarHandle::handleCar()
{
    cout << "HeadCarHandle::handleCar():: 造车尾" << endl;
    if(this->nextCarHandle != nullptr)
    {
        this->nextCarHandle->handleCar();
    }
}