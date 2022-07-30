#include "../../include/state/StopState.h"

StopState::StopState()
{
    cout << "StopState()构造函数" << endl;
}

StopState::~StopState()
{
    cout << "~StopState()析构函数" << endl;
}

void StopState::doAction(std::shared_ptr<IContext> context)
{
    context->setState(this);
    cout << "播放器在停止状态" << endl;
}

std::string StopState::toString()
{
    return "停止";
}