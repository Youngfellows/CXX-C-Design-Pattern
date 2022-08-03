#ifndef IPARK_ELEMENT_H
#define IPARK_ELEMENT_H

#include "./IVisitor.h"

//先声明类,后面再定义
class IVisitor;

/**
 * @brief 抽象类: 公园(节点)抽象类
 *
 */
class IParkElement
{
public:
    virtual ~IParkElement() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 公园(节点)接收访问者访问
     * @param visitor 要接收的访问者
     */
    virtual void accept(IVisitor *visitor) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取公园区域名称
     * @return std::string 公园区域名称
     */
    virtual std::string getName() = 0;
};

#endif