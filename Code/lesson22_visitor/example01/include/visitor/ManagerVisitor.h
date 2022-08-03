#ifndef MANAGER_VISITOR_H
#define MANAGER_VISITOR_H

#include "./AbsVisitor.h"

/**
 * @brief 访问者派生类: 公园管理者
 *
 */
class ManagerVisitor : public AbsVisitor
{
public:
    ManagerVisitor(std::string nickName);
    ~ManagerVisitor();
    virtual void visit(IParkElement *parkElement) override; //实现visti()函数
};
#endif