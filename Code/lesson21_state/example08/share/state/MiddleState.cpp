#include "../../include/state/MiddleState.h"

MiddleState::MiddleState(AbstractState *state)
{
    this->account = state->getAccount();
    this->point = state->getPoint();
    this->stateName = "高手";
}

MiddleState::MiddleState(IForumAccount *account)
{
    this->account = account;
    this->point = 0;
    this->stateName = "高手";
}

MiddleState::~MiddleState()
{
    cout << "~MiddleState()析构函数" << endl;
}

void MiddleState::writeNote(int score)
{
    printf("%s发布留言, 增加%d积分。\n", this->account->getNickName().c_str(), score * 2);
    this->point += score * 2;
    checkState();
    printf("%s剩余积分为%d, 当前级别为%s。\n", this->account->getNickName().c_str(), this->point, this->account->getState()->getStateName().c_str());
}

void MiddleState::checkState()
{
    if (this->point >= 1000)
    {
        this->account->setState(std::make_shared<HighState>(this));
    }
    else if (this->point < 100)
    {
        this->account->setState(std::make_shared<PrimaryState>(this));
    }
}