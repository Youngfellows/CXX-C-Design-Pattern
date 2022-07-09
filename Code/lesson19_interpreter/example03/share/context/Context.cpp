#include "../../include/context/Context.h"

std::string Context::getText()
{
    return text_;
}

void Context::setText(std::string text)
{
    text_ = text;
}