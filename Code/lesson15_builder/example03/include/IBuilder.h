#ifndef IBUILDER_H
#define IBUILDER_H

#include "./Global.h"

/**
 * @brief 建造者抽象类
 *
 */
class IBuilder
{
public:
    virtual ~IBuilder() {}
    virtual void makeTitle(const std::string &title) = 0;
    virtual void makeString(const std::string &str) = 0;
    virtual void makeItems(const std::vector<std::string> &items) = 0;
    virtual void close() = 0;
};

#endif