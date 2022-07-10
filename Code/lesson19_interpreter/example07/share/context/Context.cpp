#include "../../include/context/Context.h"

Context::Context(std::string cmd)
{
    cout << "Context()构造函数" << endl;
    this->cmd = cmd;
}

void Context::set(std::string cmd)
{
    this->cmd = cmd;
}

std::string Context::get()
{
    return this->cmd;
}