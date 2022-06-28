#include "../include/User.h"

User::User(std::string name)
{
    this->name = name;
}

void User::setName(std::string name)
{
    this->name = name;
}

std::string User::getName()
{
    return this->name;
}

void User::sendMessage(const std::string &message)
{
    ChatRoom::showMessage(this,message);
}