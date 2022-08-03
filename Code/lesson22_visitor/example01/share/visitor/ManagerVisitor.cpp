#include "../../include/visitor/ManagerVisitor.h"

ManagerVisitor::ManagerVisitor(std::string nickName) : AbsVisitor(nickName)
{
    cout << "ManagerVisitor()构造函数" << endl;
}

ManagerVisitor::~ManagerVisitor()
{
    cout << "~ManagerVisitor()析构函数" << endl;
}

/**
 * @brief 访问者访问公园区域
 *
 * @param parkElement 公园区域(节点)
 */
void ManagerVisitor::visit(IParkElement *parkElement)
{
    cout << "公园管理者:" << getNickName() << ",访问公园区域:" << parkElement->getName() << endl;
}