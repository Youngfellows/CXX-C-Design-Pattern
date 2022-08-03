#ifndef FAILURE_H
#define FAILURE_H

#include "../interface/IAction.h"

/**
 * @brief 行为实现类: 失败
 *
 */
class Failure : public IAction
{
public:
    Failure() = default;
    ~Failure() = default;
    virtual void getManConclusion(std::shared_ptr<IPerson> man) override;
    virtual void getWomanConclusion(std::shared_ptr<IPerson> woman) override;
};

#endif