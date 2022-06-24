#include "../include/Adapter.h"

Adapter::Adapter(std::unique_ptr<IAdaptee> pAdaptee)
{
    this->pAdaptee = std::move(pAdaptee);
}

Adapter::~Adapter()
{
    if(this->pAdaptee != nullptr)
    {
        this->pAdaptee = nullptr;
    }
}

/**
 * @brief 通过适配器的process调用老对象,被适配对象的老接口
 * 
 */
void Adapter::process()
{
    int data =  this->pAdaptee->bar();
    this->pAdaptee->foo(data);
}