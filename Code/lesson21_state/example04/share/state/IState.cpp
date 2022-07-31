#include "../../include/interface/IState.h"

IState::IState(std::string name)
{
    this->name = name;
}

std::string IState::getName()
{
    return this->name;
}