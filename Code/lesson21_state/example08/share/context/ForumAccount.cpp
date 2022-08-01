#include "../../include/context/ForumAccount.h"

ForumAccount::ForumAccount(std::string nickName, std::string email)
{
    cout << "ForumAccount()构造函数" << endl;
    this->nickName = nickName;
    this->email = email;
    cout << this->nickName << ":" << this->email << ",账户注册成功 ..." << endl;
}

ForumAccount::~ForumAccount()
{
    cout << "~ForumAccount()析构函数" << endl;
}

void ForumAccount::setState(IState *state)
{
    this->state = state;
}

IState *ForumAccount::getState()
{
    return this->state;
}

std::string ForumAccount::getNickName()
{
    return this->nickName;
}

std::string ForumAccount::getEmail()
{
    return this->email;
}

void ForumAccount::downloadFile(int score)
{
    this->state->downloadFile(score);
}

void ForumAccount::writeNote(int score)
{
    this->writeNote(score);
}

void ForumAccount::replyNote(int score)
{
    this->replyNote(score);
}