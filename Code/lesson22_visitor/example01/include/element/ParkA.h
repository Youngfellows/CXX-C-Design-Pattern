#ifndef PARK_A_H
#define PARK_A_H

#include "./AbsParkElement.h"

/**
 * @brief 节点派生类: 公园A部分
 *
 */
class ParkA : public AbsParkElement
{
public:
    ParkA(std::string name);
    ~ParkA();
    virtual void accept(IVisitor *visitor) override; //覆写accept()函数
};
#endif