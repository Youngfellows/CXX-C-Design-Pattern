#include "../../include/factory/USFactory.h"

/**
 * @brief 工厂生产具体的产品: 美国纳税人纳税策略
 * 
 * @return std::unique_ptr<TaxStrategy> 返回美国纳税人纳税策略
 */
std::unique_ptr<TaxStrategy> USFactory::create()
{
    return std::make_unique<USTax>();
}