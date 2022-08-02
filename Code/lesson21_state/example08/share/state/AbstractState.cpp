#include "../../include/state/AbstractState.h"

void AbstractState::setPoint(int point)
{
    this->point = point;
}

int AbstractState::getPoint()
{
    return this->point;
}

void AbstractState::setStateName(std::string name)
{
    this->stateName = name;
}

std::string AbstractState::getStateName()
{
    return this->stateName;
}

void AbstractState::setAccount(IForumAccount *account)
{
    this->account = account;
}

IForumAccount *AbstractState::getAccount()
{
    return this->account;
}

void AbstractState::downloadFile(int score)
{
    printf("%s下载文件, 扣除%d积分。\n", account->getNickName().c_str(), score);
    this->point -= score;
    checkState();
    printf("%s剩余积分为%d, 当前级别为%s。\n", account->getNickName().c_str(), this->point, account->getState()->getStateName().c_str());
}

void AbstractState::writeNote(int score)
{
    printf("%s发布留言, 增加%d积分。\n", account->getNickName().c_str(), score);
    this->point += score;
    checkState();
    printf("%s剩余积分为%d, 当前级别为%s。\n", account->getNickName().c_str(), this->point, account->getState()->getStateName().c_str());
}

void AbstractState::replyNote(int score)
{
    printf("%s回复留言, 增加%d积分。\n", account->getNickName().c_str(), score);
    this->point += score;
    checkState();
    printf("%s剩余积分为%d, 当前级别为%s。\n", account->getNickName().c_str(), this->point, account->getState()->getStateName().c_str());
}
