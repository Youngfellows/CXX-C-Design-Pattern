#include "../include/PowerAdapter.h"

PowerAdapter::PowerAdapter(std::unique_ptr<OwnCharger> ownCharger)
{
    this->ownCharger = std::move(ownCharger);
}

PowerAdapter::~PowerAdapter()
{
    if(this->ownCharger != nullptr)
    {
        this->ownCharger = nullptr;
    }
}

/**
 * @brief 使用俄罗斯插座接口充电
 * 
 */
void PowerAdapter::charge()
{
    this->ownCharger->ChargeWithFeetFlat();//使用自己的充电器充电
}