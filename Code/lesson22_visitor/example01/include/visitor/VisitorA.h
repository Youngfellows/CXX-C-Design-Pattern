#ifndef VISITOR_A_H
#define VISITOR_A_H

#include "./AbsVisitor.h"

/**
 * @brief 访问者派生类: 访问者A
 *
 */
class VisitorA : public AbsVisitor
{
public:
    VisitorA(std::string nickName);
    ~VisitorA();
    virtual void visit(IParkElement *parkElement) override; //实现visti()函数
};
#endif