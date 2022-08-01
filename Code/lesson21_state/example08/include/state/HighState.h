#ifndef HIGH_STATE_H
#define HIGH_STATE_H

#include "./AbstractState.h"
#include "./PrimaryState.h"
#include "./MiddleState.h"

/**
 * @brief 状态派生类: 专家
 *
 */
class HighState : public AbstractState
{
private:
public:
    // explicit HighState(AbstractState *state);
    explicit HighState(IForumAccount *account);
    ~HighState();
    virtual void writeNote(int score) override;    //覆写writeNote()函数
    virtual void downloadFile(int score) override; //覆写downloadFile()函数
    virtual void checkState() override;            //覆写checkState()函数
};
#endif