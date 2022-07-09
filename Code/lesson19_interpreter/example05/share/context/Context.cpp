#include "../../include/context/Context.h"

Context::Context()
{
    cout << "Context()构造函数" << endl;
    var = std::make_shared<std::map<char, int>>();
}

Context::~Context()
{
    cout << "~Context()析构函数" << endl;
}

void Context::set(char variable, int value)
{
    this->var->insert(std::pair<char, int>(variable, value));
}

// int Context::get(char variable)
// {
//     return this->var->at(variable);
// }

int Context::get(char variable)
{
    auto iter = this->var->find(variable);
    if (iter != this->var->end())
    {
        return iter->second;
    }
    return 0;
}
