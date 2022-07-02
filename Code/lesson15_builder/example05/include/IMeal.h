#ifndef IMEAL_H
#define IMEAL_H

#include "./Item.h"

/**
 * @brief 抽象类: 点美食抽象类
 *
 */
class IMeal
{
public:
    IMeal() = default;
    virtual ~IMeal() = default;

    /**
     * @brief 添加美食商品
     *
     * @param item 美食商品
     */
    virtual void addFood(std::shared_ptr<Item> item) = 0;

    /**
     * @brief 显示美食列表
     *
     */
    virtual void showItems() = 0;

    /**
     * @brief 获取费用
     *
     * @return float 返回美食总费用
     */
    virtual float getCost() = 0;
};

#endif