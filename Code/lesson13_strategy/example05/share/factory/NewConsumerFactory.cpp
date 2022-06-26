#include "../../include/factory/NewConsumerFactory.h"

/**
 * @brief  使用工厂生产新客户打折产品
 * 
 * @return std::unique_ptr<SalesDiscount> 返回新客户打折产品的指针变量
 */
std::unique_ptr<SalesDiscount> NewConsumerFactory::create()
{
    return std::make_unique<NewConsumerDiscount>();
}
