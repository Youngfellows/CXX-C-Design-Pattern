#ifndef ANAPHASE_STATE_H
#define ANAPHASE_STATE_H

#include "../interface/IState.h"
#include "./ProphaseState.h"
#include "./MetaphaseState.h"
// #include "./AnaphaseState.h"
#include "./EndState.h"

/**
 * @brief 状态派生类: 战争后期状态
 *
 */
class AnaphaseState : public IState
{
public:
    AnaphaseState() = default;
    ~AnaphaseState() = default;
    virtual void getCurrentState(IWar *war) override; //实现getCurrentState()函数
};
#endif