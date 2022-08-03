#include "../../include/visitor/VisitorB.h"

VisitorB::VisitorB(std::string nickName) : AbsVisitor(nickName)
{
    cout << "VisitorB()构造函数" << endl;
}

VisitorB::~VisitorB()
{
    cout << "~VisitorB()析构函数" << endl;
}

/**
 * @brief 访问者访问公园区域
 *
 * @param parkElement 公园区域(节点)
 */
void VisitorB::visit(IParkElement *parkElement)
{
    cout << "清洁工:" << getNickName() << ",完成了公园B区域:" << parkElement->getName() << "的打扫 ..." << endl;
}
