#ifndef EMPLOYEE_A_H
#define EMPLOYEE_A_H

#include "./AbsEmployee.h"

/**
 * @brief 柜员派生类: 柜员A
 * @brief 使用智能指针
 */
class EmployeeA : public AbsEmployee, public std::enable_shared_from_this<EmployeeA>
{
public:
    EmployeeA(std::string name);
    ~EmployeeA();
    virtual void accept(std::shared_ptr<IVisitor> visitor) override; //实现accept()函数
    virtual void doSomeThing() override;                             //实现doSomeThing()函数
};
#endif