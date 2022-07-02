#include "../include/Burger.h"

/**
 * @brief 返回包装器,用纸包装
 *
 * @return std::shared_ptr<Packing> 返回包装器
 */
std::shared_ptr<Packing> Burger::packingItem()
{
    return std::make_shared<Wrapper>(); //用纸包装
}
