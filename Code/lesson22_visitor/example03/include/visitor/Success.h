#ifndef SUCCESS_H
#define SUCCESS_H

#include "../interface/IAction.h"

/**
 * @brief 行为实现类: 成功
 *
 */
class Success : public IAction
{
public:
    Success() = default;
    ~Success() = default;
    virtual void getManConclusion(std::shared_ptr<IPerson> man) override;
    virtual void getWomanConclusion(std::shared_ptr<IPerson> woman) override;
};

#endif