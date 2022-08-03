#include "../../include/element/AbsParkElement.h"

AbsParkElement::AbsParkElement(std::string name)
{
    this->name = name;
}

std::string AbsParkElement::getName()
{
    return this->name;
}
