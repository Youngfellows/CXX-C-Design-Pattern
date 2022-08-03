#ifndef WOMAN_H
#define WOMAN_H

#include "../interface/IPerson.h"

/**
 * @brief 节点节点实现类: 女人
 *
 */
class Woman : public IPerson, public std::enable_shared_from_this<Woman>
{

public:
    Woman() = default;
    ~Woman() = default;
    virtual void accept(std::shared_ptr<IAction> action) override;
};
#endif