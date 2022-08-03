#ifndef IELEMENT_H
#define IELEMENT_H

#include "../Global.h"
#include "./IVisitor.h"

//先声明类,后面再定义
class IVisitor;

/**
 * @brief 抽象类: 柜员抽象类
 * @brief 柜员接受客户访问
 */
class IElement
{
public:
    virtual ~IElement() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 柜员接受客户访问
     * @param visitor 客户访问者
     */
    virtual void accept(std::shared_ptr<IVisitor> visitor) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取柜员名称
     * @return std::string
     */
    virtual std::string getName() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 通过柜员做某事
     */
    virtual void doSomeThing() = 0;
};

#endif