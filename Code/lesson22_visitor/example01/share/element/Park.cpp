#include "../../include/element/Park.h"

/**
 * @brief 构造函数,并初始化父类属性
 *
 * @param name 公园节点名称
 */
Park::Park(std::string name) : AbsParkElement(name)
{
    cout << "Park()构造函数" << endl;
    this->parkElemens = new std::list<IParkElement *>();
    this->parkElemens->clear();
}

Park::~Park()
{
    cout << "~Park()析构函数" << endl;
}

void Park::setParkElement(IParkElement *parkElement)
{
    this->parkElemens->push_back(parkElement);
}

/**
 * @brief 公园区域A接收访问者
 *
 * @param visitor 访问公园区域A的访问者
 */
void Park::accept(IVisitor *visitor)
{
    //公园接受访问者访问 让访问者做操作
    std::list<IParkElement *>::iterator iter;
    for (iter = this->parkElemens->begin(); iter != this->parkElemens->end(); iter++)
    {
        IParkElement *element = *iter;
        element->accept(visitor);
    }
}
