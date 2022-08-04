#ifndef SHOPPING_CAR_H
#define SHOPPING_CAR_H

#include "../Global.h"
#include "../interface/IProduct.h"
#include "../interface/IVisitor.h"

/**
 * @brief 购物车
 *
 */
class ShoppingCart
{
private:
    std::shared_ptr<std::list<std::shared_ptr<IProduct>>> products = nullptr; //产品列表

public:
    ShoppingCart();
    ~ShoppingCart();
    void addProduct(std::shared_ptr<IProduct> product);    //添加产品
    void removeProduct(std::shared_ptr<IProduct> product); //移除产品
    void accept(std::shared_ptr<IVisitor> visitor);        //接收访问者访问产品
};
#endif