#include "../../include/visitor/AbsVisitor.h"

AbsVisitor::AbsVisitor(std::string nickName)
{
    this->nickName = nickName;
}

std::string AbsVisitor::getNickName()
{
    return this->nickName;
}
