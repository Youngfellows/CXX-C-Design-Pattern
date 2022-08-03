#include "../../include/element/AbsEmployee.h"

AbsEmployee::AbsEmployee(std::string name)
{
    this->name = name;
}

std::string AbsEmployee::getName()
{
    return this->name;
}