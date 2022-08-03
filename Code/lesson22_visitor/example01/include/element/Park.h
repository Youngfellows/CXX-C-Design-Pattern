#ifndef PARK_H
#define PARK_H

#include "./AbsParkElement.h"

/**
 * @brief 节点派生类: 整个公园
 *
 */
class Park : public AbsParkElement
{
private:
    //公园的每一部分，应该让公园的每一个部分都让管理者访问
    std::list<IParkElement *> *parkElemens = nullptr;

public:
    Park(std::string name);
    ~Park();
    virtual void accept(IVisitor *visitor) override; //覆写accept()函数
    void setParkElement(IParkElement *parkElement);  //添加公园各个区域部分
};

#endif