#ifndef ABS_PRODUCT_H
#define ABS_PRODUCT_H

#include "../interface/IProduct.h"

/**
 * @brief 基类: 产品基类
 *
 */
class AbsProduct : public IProduct
{
private:
    std::string name; //产品名称
    double price;     //产品价格

public:
    AbsProduct(std::string name, double price);
    virtual ~AbsProduct() = default;
    virtual std::string productName() override;
    virtual double productPrice() override;
};

#endif