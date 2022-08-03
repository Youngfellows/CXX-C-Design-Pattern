#ifndef MAN_H
#define MAN_H

#include "../interface/IPerson.h"

/**
 * @brief 节点节点实现类: 男人
 *
 */
class Man : public IPerson, public std::enable_shared_from_this<Man>
{

public:
    Man() = default;
    ~Man() = default;
    virtual void accept(std::shared_ptr<IAction> action) override;
};

#endif