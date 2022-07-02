#ifndef IDIRECTOR_H
#define IDIRECTOR_H

#include "./Global.h"
#include "./Product.h"

/**
 * @brief 抽象负责任
 *
 */
class IDirector
{
    
public:
    virtual ~IDirector() = default;

    /**
     * @brief 纯虚函数,指挥创建产品
     * @brief
     *
     * @return std::shared_ptr<Product> 返回创建好的产品
     */
    virtual std::shared_ptr<Product> construct() = 0;
};
#endif