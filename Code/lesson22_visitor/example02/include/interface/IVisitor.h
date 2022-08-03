#ifndef IVISITOR_H
#define IVISITOR_H

#include "../Global.h"
#include "./IElement.h"

//先声明类,后面再定义
class IElement;

/**
 * @brief 抽象类: 访问者抽象类
 * @brief 访问者访问柜员
 */
class IVisitor
{
public:
    virtual ~IVisitor() = default;

    /**
     * @brief 纯虚函数,抽象接口
     *
     * @param element
     */
    virtual void visit(std::shared_ptr<IElement> element) = 0;
};

#endif