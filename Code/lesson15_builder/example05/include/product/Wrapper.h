#ifndef WRAPPER_H
#define WRAPPER_H

#include "../Packing.h"

/**
 * @brief 派生类: 用纸包装
 *
 */
class Wrapper : public Packing
{
private:
public:
    Wrapper() = default;
    ~Wrapper() = default;
    virtual std::string pack() override; //实现pack()函数
};
#endif