#ifndef EMPLOYEE_B_H
#define EMPLOYEE_B_H

#include "./AbsEmployee.h"

/**
 * @brief 柜员派生类: 柜员B
 * @brief 使用智能指针
 */
class EmployeeB : public AbsEmployee, public std::enable_shared_from_this<EmployeeB>
{
public:
    EmployeeB(std::string name);
    ~EmployeeB();
    virtual void accept(std::shared_ptr<IVisitor> visitor) override; //实现accept()函数
    virtual void doSomeThing() override;                             //实现doSomeThing()函数
};
#endif