#ifndef PACKING_H
#define PACKING_H

#include "./Global.h"

/**
 * @brief 抽象类: 包装器接口
 *
 */
class Packing
{
public:
    Packing() = default;
    virtual ~Packing() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 使用xx来进行包装
     *
     * @return std::string
     */
    virtual std::string pack() = 0;
};

#endif