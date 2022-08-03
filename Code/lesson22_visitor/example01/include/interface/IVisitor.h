#ifndef IVISITOR_H
#define IVISITOR_H

#include "./IParkElement.h"

//先声明类,后面再定义
class IParkElement;

/**
 * @brief 抽象类: 抽象访问者
 *
 */
class IVisitor
{
public:
    virtual ~IVisitor() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 访问公园(节点)
     * @param parkElement 公园节点
     */
    virtual void visit(IParkElement *parkElement) = 0;
};
#endif