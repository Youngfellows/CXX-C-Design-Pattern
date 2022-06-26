#include "../../include/factory/FRFactory.h"

/**
 * @brief 工厂生产具体的产品: 法国纳税人纳税策略
 * 
 * @return std::unique_ptr<TaxStrategy> 返回法国纳税人纳税策略
 */
std::unique_ptr<TaxStrategy> FRFactory::create()
{
    return std::make_unique<FRTax>();
}
