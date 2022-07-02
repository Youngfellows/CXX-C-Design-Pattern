#ifndef ITEM_H
#define ITEM_H

#include "./Global.h"
#include "./Packing.h"

/**
 * @brief 抽象类: 抽象产品
 *
 */
class Item
{

public:
    Item() = default;

    virtual ~Item() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 商品名称
     * @return std::string 返回商品名称
     */
    virtual std::string name() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 商品价格
     *
     * @return float 返回商品价格
     */
    virtual float price() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 包装商品
     *
     * @return std::shared_ptr<Packing> 返回商品包装器
     */
    virtual std::shared_ptr<Packing> packingItem() = 0;
};

#endif