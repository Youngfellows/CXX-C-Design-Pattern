#include "../../include/factory/DEFactory.h"

/**
 * @brief 工厂生产具体的产品: 德国纳税人纳税策略
 * 
 * @return std::unique_ptr<TaxStrategy> 返回德国纳税人纳税策略
 */
std::unique_ptr<TaxStrategy> DEFactory::create()
{
    return std::make_unique<DETax>();
}