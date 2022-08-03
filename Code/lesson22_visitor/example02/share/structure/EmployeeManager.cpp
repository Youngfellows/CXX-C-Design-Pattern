#include "../../include/structure/EmployeeManager.h"

EmployeeManager::EmployeeManager(std::string name) : AbsEmployee(name)
{
    cout << "EmployeeManager()构造函数" << endl;
    employees = std::make_shared<std::vector<std::shared_ptr<IElement>>>();
}

EmployeeManager::~EmployeeManager()
{
    cout << "~EmployeeManager()析构函数" << endl;
    this->employees->clear(); //清空容器
}

void EmployeeManager::addElement(std::shared_ptr<IElement> employee)
{
    this->employees->push_back(employee);
}

/**
 * @brief 管理者把任务分配给每一个柜员
 * @brief 让每一个员工为不同的访问者办理不同的业务
 * @param visitor 客户访问者
 */
void EmployeeManager::accept(std::shared_ptr<IVisitor> visitor)
{
    for (auto iter = this->employees->begin(); iter != this->employees->end(); iter++)
    {
        std::shared_ptr<IElement> employee = *iter;
        employee->accept(visitor); //让每一个员工为不同的访问者办理不同的业务
    }
}

void EmployeeManager::doSomeThing()
{
    cout << "管理者:" << getName() << ",负责分配任务 ..." << endl;
}
