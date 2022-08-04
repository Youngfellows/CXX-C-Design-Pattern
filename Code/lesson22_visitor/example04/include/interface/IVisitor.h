#ifndef IVISITOR_H
#define IVISITOR_H

#include "../Global.h"
#include "./IProduct.h"

//先声明类,后面再定义
class IProduct;

/**
 * @brief 抽象接口: 抽象访问者
 *
 */
class IVisitor
{
public:
    virtual ~IVisitor() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 访问者访问apple
     * @param apple 节点对象apple
     */
    virtual void visitPartApple(std::shared_ptr<IProduct> apple) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 访问者访问apple
     * @param book 节点对象book
     */
    virtual void visitPartBook(std::shared_ptr<IProduct> book) = 0;
};

#endif