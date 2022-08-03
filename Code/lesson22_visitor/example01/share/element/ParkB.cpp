#include "../../include/element/ParkB.h"

/**
 * @brief 构造函数,并初始化父类属性
 *
 * @param name 公园节点名称
 */
ParkB::ParkB(std::string name) : AbsParkElement(name)
{
    cout << "ParkB()构造函数" << endl;
}

ParkB::~ParkB()
{
    cout << "~ParkB()析构函数" << endl;
}

/**
 * @brief 公园区域B接收访问者
 *
 * @param visitor 访问公园区域B的访问者
 */
void ParkB::accept(IVisitor *visitor)
{
    //公园接受访问者访问 让访问者做操作
    visitor->visit(this);
}