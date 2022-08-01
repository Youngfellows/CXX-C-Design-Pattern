#include "../../include/state/PrimaryState.h"

// PrimaryState::PrimaryState(AbstractState *state)
// {
//     this->account = state->getAccount();
//     this->point = state->getPoint();
//     this->stateName = "新手";
// }

PrimaryState::PrimaryState(IForumAccount *account)
{
    this->account = account;
    this->point = 0;
    this->stateName = "新手";
}

PrimaryState::~PrimaryState()
{
    cout << "~PrimaryState()" << endl;
}

void PrimaryState::downloadFile(int score)
{
    printf("对不起, %s没有下载文件的权限!\n", this->account->getNickName().c_str());
}

void PrimaryState::checkState()
{
    if (this->point >= 1000)
    {
        // this->account->setState(std::make_shared<HighState>(this));
        this->account->setState(new HighState(this->account));
    }
    else if (this->point >= 100)
    {
        // this->account->setState(std::make_shared<MiddleState>(this));
    }
}