#include "../../include/element/EmployeeB.h"

EmployeeB::EmployeeB(std::string name) : AbsEmployee(name)
{
    cout << "EmployeeB()构造函数" << endl;
}

EmployeeB::~EmployeeB()
{
    cout << "~EmployeeB()析构函数" << endl;
}

void EmployeeB::accept(std::shared_ptr<IVisitor> visitor)
{
    visitor->visit(shared_from_this()); //把当前对象转化为智能指针
}

void EmployeeB::doSomeThing()
{
    cout << "办理住房公积金业务 ..." << endl;
}
