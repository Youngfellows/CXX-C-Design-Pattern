#include "../include/Context.h"

Context::Context(std::unique_ptr<Strategy> strategy)
{
    this->strategy = std::move(strategy);
}

void Context::setStrategy(std::unique_ptr<Strategy> strategy)
{
    this->strategy = std::move(strategy);
}

Context::~Context()
{
    if(this->strategy != nullptr)
    {
        this->strategy = nullptr;
    }
}

void Context::myoperator()
{
    this->strategy->crypt();
}
