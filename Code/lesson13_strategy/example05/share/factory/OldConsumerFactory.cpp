#include "../../include/factory/OldConsumerFactory.h"

/**
 * @brief  使用工厂生产老客户打折产品
 * 
 * @return std::unique_ptr<SalesDiscount> 返回老客户打折产品的指针变量
 */
std::unique_ptr<SalesDiscount> OldConsumerFactory::create()
{
    return std::make_unique<OldConsumerDiscount>();
}