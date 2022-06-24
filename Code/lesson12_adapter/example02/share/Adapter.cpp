#include "../include/Adapter.h"

/**
 * @brief 通过适配器的process调用老对象,被适配对象的老接口
 * 
 */
void Adapter::process()
{
    int data = this->bar();
    this->foo(data);
}