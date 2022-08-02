#ifndef METAPHASE_STATE_H
#define METAPHASE_STATE_H

#include "../interface/IState.h"
#include "./ProphaseState.h"
// #include "./MetaphaseState.h"
#include "./AnaphaseState.h"
#include "./EndState.h"

/**
 * @brief 状态派生类: 战争中期状态
 *
 */
class MetaphaseState : public IState
{
public:
    MetaphaseState() = default;
    ~MetaphaseState() = default;
    virtual void getCurrentState(IWar *war) override; //实现getCurrentState()函数
};

#endif