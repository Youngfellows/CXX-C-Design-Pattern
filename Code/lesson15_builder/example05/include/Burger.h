#ifndef BURGER_H
#define BURGER_H

#include "./Item.h"
#include "./product/Wrapper.h"

/**
 * @brief 派生类产品: 汉堡
 *
 */
class Burger : public Item
{

public:
    Burger() = default;
    virtual ~Burger() = default;

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