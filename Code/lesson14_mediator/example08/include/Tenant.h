#ifndef TENANT_H
#define TENANT_H

#include "./Colleague.h"

/**
 * @brief 具体组件2: 租客
 * 
 */
class Tenant : public Colleague
{
public:
    Tenant()
    {
        name_ = "unknown";
    }

    explicit Tenant(std::string name)
    {
        name_ = name;
        set_personType(kTenant);
    }

    void ask()
    {
        printf("租客%s询问房东信息:\n", name_.c_str());
        this->get_mediator()->operation(this);
    }

    void answer()
    {
        printf("租客姓名: %s\n", name_.c_str());
    }

private:
    std::string name_;
};

#endif