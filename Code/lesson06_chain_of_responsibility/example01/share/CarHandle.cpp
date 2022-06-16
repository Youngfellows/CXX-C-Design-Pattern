#include "../include/CarHandle.h"

CarHandle::~CarHandle()
{
    cout << "~CarHandle()析构函数" << endl;
}

/**
 * @brief 设置下一个处理单元
 * 
 * @param nextHandle 下一个处理单元
 */
void CarHandle::setNextHandle(std::shared_ptr<CarHandle> nextHandle)
{
    this->nextCarHandle = nextHandle;
    cout << "nextCarHandle:" << this->nextCarHandle << endl;
}