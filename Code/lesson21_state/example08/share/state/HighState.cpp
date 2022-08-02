#include "../../include/state/HighState.h"

HighState::HighState(AbstractState *state)
{
    this->account = state->getAccount();
    this->point = state->getPoint();
    this->stateName = "专家";
}

HighState::HighState(IForumAccount *account)
{
    this->account = account;
    this->point = 0;
    this->stateName = "专家";
}

HighState::~HighState()
{
    cout << "~HighState()析构函数" << endl;
}

void HighState::writeNote(int score)
{
    printf("%s发布留言, 增加%d积分。\n", this->account->getNickName().c_str(), score * 2);
    this->point += score * 2;
    checkState();
    printf("%s剩余积分为%d, 当前级别为%s。\n", this->account->getNickName().c_str(), this->point, this->account->getState()->getStateName().c_str());
}

void HighState::downloadFile(int score)
{
    printf("%s下载文件, 扣除%d积分。\n", this->account->getNickName().c_str(), score / 2);
    this->point -= score / 2;
    checkState();
    printf("%s剩余积分为%d, 当前级别为%s。\n", this->account->getNickName().c_str(), this->point, this->account->getState()->getStateName().c_str());
}

void HighState::checkState()
{
    if (this->point < 100)
    {
        this->account->setState(std::make_shared<PrimaryState>(this));
    }
    else if (this->point < 1000)
    {
        this->account->setState(std::make_shared<MiddleState>(this));
    }
}
