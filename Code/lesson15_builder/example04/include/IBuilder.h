#ifndef IBUILDER_H
#define IBUILDER_H

#include "./Product.h"
#include "./Global.h"

/**
 * @brief 抽象类: 抽象建造者
 *
 */
class IBuilder
{
public:
    virtual ~IBuilder() = default;

    /**
     * @brief 添加米粉
     *
     */
    virtual void buildRiceNoddles() = 0;

    /**
     * @brief 添加盘子
     *
     */
    virtual void buildCoolDish() = 0;

    /**
     * @brief 添加饮料
     *
     */
    virtual void buildDrink() = 0;

    /**
     * @brief 获取制作好的产品
     *
     * @return std::shared_ptr<Product> 返回制作好的产品
     */
    virtual std::shared_ptr<Product> getProdect() = 0;
};

#endif