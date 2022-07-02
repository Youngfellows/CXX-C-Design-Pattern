#ifndef BOTTLE_H
#define BOTTLE_H

#include "../Packing.h"

/**
 * @brief 派生类: 用瓶子包装
 *
 */
class Bottle : public Packing
{
private:
public:
    Bottle() = default;
    ~Bottle() = default;
    virtual std::string pack() override; //实现pack()函数
};
#endif