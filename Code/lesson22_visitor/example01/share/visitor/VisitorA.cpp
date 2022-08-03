#include "../../include/visitor/VisitorA.h"

VisitorA::VisitorA(std::string nickName) : AbsVisitor(nickName)
{
    cout << "VisitorA()构造函数" << endl;
}

VisitorA::~VisitorA()
{
    cout << "~VisitorA()析构函数" << endl;
}

/**
 * @brief 访问者访问公园区域
 *
 * @param parkElement 公园区域(节点)
 */
void VisitorA::visit(IParkElement *parkElement)
{
    cout << "清洁工:" << getNickName() << ",完成了公园A区域:" << parkElement->getName() << "的打扫 ..." << endl;
}