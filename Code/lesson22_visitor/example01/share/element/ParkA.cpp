#include "../../include/element/ParkA.h"

/**
 * @brief 构造函数,并初始化父类属性
 *
 * @param name 公园节点名称
 */
ParkA::ParkA(std::string name) : AbsParkElement(name)
{
    cout << "ParkA()构造函数" << endl;
}

ParkA::~ParkA()
{
    cout << "~ParkA()析构函数" << endl;
}

/**
 * @brief 公园区域A接收访问者
 *
 * @param visitor 访问公园区域A的访问者
 */
void ParkA::accept(IVisitor *visitor)
{
    //公园接受访问者访问 让访问者做操作
    visitor->visit(this);
}