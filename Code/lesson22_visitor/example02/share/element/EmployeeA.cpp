#include "../../include/element/EmployeeA.h"

EmployeeA::EmployeeA(std::string name) : AbsEmployee(name)
{
    cout << "EmployeeA()构造函数" << endl;
}

EmployeeA::~EmployeeA()
{
    cout << "~EmployeeA()析构函数" << endl;
}

void EmployeeA::accept(std::shared_ptr<IVisitor> visitor)
{
    visitor->visit(shared_from_this()); //把当前对象转化为智能指针
}

void EmployeeA::doSomeThing()
{
    cout << "办理银行卡,存款业务 ..." << endl;
}