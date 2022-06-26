#include "../include/Context.h"

Context::Context(std::unique_ptr<Strategy> strategy)
{
    this->strategy = std::move(strategy);
}

double Context::excuteStrategy(double num1,double num2)
{
    cout << "通过客户端调用算法" << endl;
    return this->strategy->doOperation(num1,num2);
}

Context::~Context()
{
    if(this->strategy != nullptr)
    {
        this->strategy = nullptr;
    }
}