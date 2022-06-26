#include "../../include/factory/VIPConsumerFactory.h"

/**
 * @brief  使用工厂生产VIP客户打折产品
 * 
 * @return std::unique_ptr<SalesDiscount> 返回VIP客户打折产品的指针变量
 */
std::unique_ptr<SalesDiscount> VIPConsumerFactory::create()
{
    return std::make_unique<VIPConsumerDiscount>();
}