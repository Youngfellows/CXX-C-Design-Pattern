#ifndef XIAO_NV_BUILDER_H
#define XIAO_NV_BUILDER_H

#include "./IBuilder.h"

/**
 * @brief 派生类: 小女当家(创建者)
 *
 */
class XiaoNvBuilder : public IBuilder
{
private:
    std::shared_ptr<Product> product = nullptr; //产品

public:
    XiaoNvBuilder();
    ~XiaoNvBuilder();
    virtual void buildRiceNoddles() override;               //实现buildRiceNoddles()函数
    virtual void buildCoolDish() override;                  //实现buildCoolDish()函数
    virtual void buildDrink() override;                     //实现buildDrink()函数
    virtual std::shared_ptr<Product> getProdect() override; //实现getProdect()函数
};
#endif