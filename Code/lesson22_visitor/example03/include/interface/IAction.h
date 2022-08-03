#ifndef IACTION_H
#define IACTION_H

#include "../Global.h"
#include "./IPerson.h"

//先声明类,后面再定义
class IPerson;

/**
 * @brief 抽象接口: 行为,访问者抽象接口
 *
 */
class IAction
{
public:
    virtual ~IAction() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 男人的结论
     * @param man 男人
     */
    virtual void getManConclusion(std::shared_ptr<IPerson> man) = 0;

    /**
     * @brief纯虚函数,抽象接口
     * @brief 女人的结论
     * @param woman 女人
     */
    virtual void getWomanConclusion(std::shared_ptr<IPerson> woman) = 0;
};

#endif