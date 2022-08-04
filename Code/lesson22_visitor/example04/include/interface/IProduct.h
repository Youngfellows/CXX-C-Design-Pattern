#ifndef IPRODUCT_H
#define IPRODUCT_H

#include "../Global.h"
#include "./IVisitor.h"

//先声明类,后面在定义
class IVisitor;

/**
 * @brief 节点抽象接口: 抽象产品
 *
 */
class IProduct
{
public:
    virtual ~IProduct() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 产品接收一个访问者访问
     * @param visitor 访问者
     */
    virtual void accept(std::shared_ptr<IVisitor> visitor) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取产品名称
     * @return std::string
     */
    virtual std::string productName() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取产品单价
     * @return double
     */
    virtual double productPrice() = 0;
};

#endif