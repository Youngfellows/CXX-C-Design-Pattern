#ifndef END_STATE_H
#define END_STATE_H

#include "../interface/IState.h"
#include "./ProphaseState.h"
#include "./MetaphaseState.h"
#include "./AnaphaseState.h"
// #include "./EndState.h"

/**
 * @brief 状态派生类: 战争结束状态
 *
 */
class EndState : public IState
{
public:
    EndState() = default;
    ~EndState() = default;
    virtual void getCurrentState(IWar *war) override; //实现getCurrentState()函数
};
#endif