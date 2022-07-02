#include "../include/ColdDrink.h"

/**
 * @brief 返回包装器,用瓶子包装
 *
 * @return std::shared_ptr<Packing> 返回包装器
 */
std::shared_ptr<Packing> ColdDrink::packingItem()
{
    return std::make_shared<Bottle>(); //用瓶子包装
}
