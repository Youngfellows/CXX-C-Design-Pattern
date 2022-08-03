#ifndef ABS_CUSTOMER_H
#define ABS_CUSTOMER_H

#include "../interface/IVisitor.h"

/**
 * @brief 基类: 客户,访问者基类
 *
 */
class AbsCustomer : public IVisitor
{
protected:
    std::string name; //客户名称

public:
    AbsCustomer(std::string name);
    virtual ~AbsCustomer() = default;
};

#endif