#include "../../include/interface/IState.h"

using namespace state;

IState::IState(std::string name)
{
    this->name = name;
}

std::string IState::getName()
{
    return this->name;
}