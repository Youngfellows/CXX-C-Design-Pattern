#ifndef PRIMARY_STATE_H
#define PRIMARY_STATE_H

#include "./AbstractState.h"
#include "./MiddleState.h"
#include "./HighState.h"

/**
 * @brief 状态派生类: 新手
 *
 */
class PrimaryState : public AbstractState
{
private:
public:
    explicit PrimaryState(AbstractState *state);
    explicit PrimaryState(IForumAccount *account);
    ~PrimaryState();
    virtual void downloadFile(int score) override; //覆写downloadFile()函数
    virtual void checkState() override;            //覆写checkState()函数
};
#endif