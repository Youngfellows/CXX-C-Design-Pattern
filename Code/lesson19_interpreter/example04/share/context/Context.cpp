#include "../../include/context/Context.h"

Context::Context()
{
    cout << "Context()构造函数" << endl;
    vars = std::make_shared<std::map<std::string, bool>>();
}

Context::~Context()
{
    cout << "~Context()析构函数" << endl;
}

void Context::set(std::string key, bool value)
{
    this->vars->insert(std::pair<std::string, bool>(key, value));
}

bool Context::get(std::string key)
{
    return this->vars->at(key);
}

// bool Context::get(std::string key)
// {
//     return *(this->vars)[key];
// }
