#ifndef MIDDLE_STATE_H
#define MIDDLE_STATE_H

#include "./AbstractState.h"
#include "./PrimaryState.h"
#include "./HighState.h"

/**
 * @brief 状态派生类: 高手
 *
 */
class MiddleState : public AbstractState
{
private:
public:
    // explicit MiddleState(AbstractState *state);
    explicit MiddleState(IForumAccount *account);
    ~MiddleState();
    virtual void writeNote(int score) override; //覆写writeNote()函数
    virtual void checkState() override;         //覆写checkState()函数
};
#endif