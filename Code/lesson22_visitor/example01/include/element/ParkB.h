#ifndef PARK_B_H
#define PARK_B_H

#include "./AbsParkElement.h"

/**
 * @brief 节点派生类: 公园B部分
 *
 */
class ParkB : public AbsParkElement
{
public:
    ParkB(std::string name);
    ~ParkB();
    virtual void accept(IVisitor *visitor) override; //覆写accept()函数
};
#endif