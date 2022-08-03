#ifndef EMPLOYEE_MANAGER_H
#define EMPLOYEE_MANAGER_H

#include "../element/AbsEmployee.h"

/**
 * @brief 员工管理者,管理很多个员工
 * @brief 让每一个员工都接受访问者访问,也就是让每一个员工为不同的访问者办理不同的业务
 */
class EmployeeManager : public AbsEmployee
{
private:
    std::shared_ptr<std::vector<std::shared_ptr<IElement>>> employees = nullptr; //柜员列表

public:
    EmployeeManager(std::string name);
    ~EmployeeManager();
    void addElement(std::shared_ptr<IElement> employee);             //新增加柜员
    virtual void accept(std::shared_ptr<IVisitor> visitor) override; //实现accept()函数
    virtual void doSomeThing() override;                             //实现doSomeThing()函数
};
#endif