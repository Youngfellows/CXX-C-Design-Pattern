#ifndef PROPHASE_STATE_H
#define PROPHASE_STATE_H

#include "../interface/IState.h"
// #include "./ProphaseState.h"
#include "./MetaphaseState.h"
#include "./AnaphaseState.h"
#include "./EndState.h"

/**
 * @brief 状态派生类: 战争前期状态
 *
 */
class ProphaseState : public IState
{
public:
    ProphaseState() = default;
    ~ProphaseState() = default;
    virtual void getCurrentState(IWar *war) override; //实现getCurrentState()函数
};
#endif