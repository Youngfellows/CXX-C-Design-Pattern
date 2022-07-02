#ifndef COLD_DRINK_H
#define COLD_DRINK_H

#include "./Item.h"
#include "./product/Bottle.h"

/**
 * @brief 派生类产品: 冷饮
 *
 */
class ColdDrink : public Item
{

public:
    ColdDrink() = default;
    virtual ~ColdDrink() = default;

    /**
     * @brief 纯虚函数,抽象接口,覆写price()接口
     * @brief 商品价格
     *
     * @return float 返回商品价格
     */
    virtual float price() override = 0;

    virtual std::shared_ptr<Packing> packingItem() override; //实现packingItem()函数
};
#endif