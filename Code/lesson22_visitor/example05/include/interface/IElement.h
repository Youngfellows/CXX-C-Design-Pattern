#ifndef IELEMENT_H
#define IELEMENT_H

#include "../Global.h"
#include "./IVisitor.h"

//先声明类,后面再定义
class IVisitor;

/**
 * @brief 抽象接口: 抽象角色接口
 *
 */
class IElement
{
public:
    virtual ~IElement() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 接收
     * @param visitor
     */
    virtual void accept(std::shared_ptr<IVisitor> visitor) = 0;
};

#endif