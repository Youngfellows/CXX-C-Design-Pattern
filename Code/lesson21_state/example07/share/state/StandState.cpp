#include "../../include/state/StandState.h"

//在类外初始化静态属性
IState *StandState::pStandState = nullptr;       //初始化静态指针变量
StandState::AutoDeletor StandState::autoDeletor; //初始化对象
std::mutex StandState::mMutex;                   //初始化互斥锁

StandState::StandState()
{
    cout << "StandState()私有构造函数" << endl;
}

StandState::~StandState()
{
    cout << "~StandState()析构函数" << endl;
}

IState *StandState::getInstance()
{
    if (pStandState == nullptr)
    {
        std::lock_guard<std::mutex> lock(mMutex); //自动上锁,自动解锁
        if (pStandState == nullptr)
        {
            pStandState = new StandState();
        }
    }
    return pStandState;
}

void StandState::down(IPerson *person)
{
    //切换下一个状态
    person->setState(SquatState::getInstance());
}

void StandState::up(IPerson *person)
{
    cout << typeid(this).name() << "::" << __FUNCTION__ << "():: 没有上一个状态" << endl;
}

void StandState::action(IPerson *person)
{
    cout << "StandState::action():: 步行 ..." << endl;
}