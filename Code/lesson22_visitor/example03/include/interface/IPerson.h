#ifndef IPERSON_H
#define IPERSON_H

#include "../Global.h"
#include "./IAction.h"

//先声明类,后面再定义
class IAction;

/**
 * @brief 抽象接口: 人,节点抽象接口
 *
 */
class IPerson
{
public:
    virtual ~IPerson() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 接受访问者(也就是成功or失败的行为)
     *
     * @param action 行为
     */
    virtual void accept(std::shared_ptr<IAction> action) = 0;
};

#endif