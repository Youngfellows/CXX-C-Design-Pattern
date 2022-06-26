#include "../../include/factory/CNFactory.h"

/**
 * @brief 工厂生产具体的产品: 中国纳税人纳税策略
 * 
 * @return std::unique_ptr<TaxStrategy> 返回中国纳税人纳税策略
 */
std::unique_ptr<TaxStrategy> CNFactory::create()
{
    return std::make_unique<CNTax>();
}
