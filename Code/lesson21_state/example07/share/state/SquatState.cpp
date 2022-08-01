#include "../../include/state/SquatState.h"

//在类外初始化静态属性
IState *SquatState::pSquatState = nullptr;       //初始化静态指针变量
SquatState::AutoDeletor SquatState::autoDeletor; //初始化对象
std::mutex SquatState::mMutex;                   //初始化互斥锁

SquatState::SquatState()
{
    cout << "SquatState()私有构造函数" << endl;
}

SquatState::~SquatState()
{
    cout << "~SquatState()析构函数" << endl;
}

IState *SquatState::getInstance()
{
    if (pSquatState == nullptr)
    {
        std::lock_guard<std::mutex> lock(mMutex); //自动上锁,自动解锁
        if (pSquatState == nullptr)
        {
            pSquatState = new SquatState();
        }
    }
    return pSquatState;
}

void SquatState::down(IPerson *person)
{
    //切换下一个状态
    person->setState(LieProneState::getInstance());
}

void SquatState::up(IPerson *person)
{
    //切换下一个状态
    person->setState(StandState::getInstance());
}

void SquatState::action(IPerson *person)
{
    cout << "SquatState::action():: 深蹲 ..." << endl;
}