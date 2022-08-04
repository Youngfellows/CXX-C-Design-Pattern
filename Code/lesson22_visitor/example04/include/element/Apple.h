#ifndef APPLE_H
#define APPLE_H

#include "./AbsProduct.h"

/**
 * @brief 具体产品类: 苹果
 *
 */
class Apple : public AbsProduct, public std::enable_shared_from_this<Apple>
{
public:
    Apple(std::string name, double price);
    ~Apple();
    virtual void accept(std::shared_ptr<IVisitor> visitor) override;
};

#endif