#include "../../include/state/StartState.h"

StartState::StartState()
{
    cout << "StartState()构造函数" << endl;
}

StartState::~StartState()
{
    cout << "~StartState()析构函数" << endl;
}

void StartState::doAction(std::shared_ptr<IContext> context)
{
    context->setState(this);
    cout << "播放器在开始播放状态" << endl;
}

std::string StartState::toString()
{
    return "开始";
}
