#ifndef VISITOR_B_H
#define VISITOR_B_H

#include "./AbsVisitor.h"

/**
 * @brief 访问者派生类: 访问者B
 *
 */
class VisitorB : public AbsVisitor
{
public:
    VisitorB(std::string nickName);
    ~VisitorB();
    virtual void visit(IParkElement *parkElement) override; //实现visti()函数
};
#endif