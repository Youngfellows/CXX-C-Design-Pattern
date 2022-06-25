#include "../include/Adapter.h"

Adapter::Adapter(std::unique_ptr<Current220v> current220v )
{
    this->current220v = std::move(current220v);
}

Adapter::~Adapter()
{
    if(this->current220v != nullptr)
    {
        this->current220v = nullptr;
    }
}

void Adapter::useCurrent18v()
{
    cout << "Adapter::useCurrent18v():: 使用适配器适配18v接口 ..." << endl;
    this->current220v->useCurrent220v();
}