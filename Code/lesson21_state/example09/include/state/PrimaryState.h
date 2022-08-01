#ifndef PRIMARY_STATE_H
#define PRIMARY_STATE_H

#include "../interface/AbstractState.h"
#include "./HighState.h"
#include "./MiddleState.h"

/**
 * @brief 具体状态类: 新手
 *
 */
class PrimaryState : public AbstractState
{
public:
    explicit PrimaryState(AbstractState *state)
    {
        account_ = state->get_account();
        point_ = state->get_point();
        state_name_ = "新手";
    }

    explicit PrimaryState(ForumAccount *account)
    {
        account_ = account;
        point_ = 0;
        state_name_ = "新手";
    }

    void downloadFile(int score) override
    {
        printf("对不起, %s没有下载文件的权限!\n", account_->get_name().c_str());
    }

    void checkState() override;
};

#endif