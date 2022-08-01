#include "../../include/state/LieProneState.h"

//在类外初始化静态属性
IState *LieProneState::pLieProneState = nullptr;       //初始化静态指针变量
LieProneState::AutoDeletor LieProneState::autoDeletor; //初始化对象
std::mutex LieProneState::mMutex;                      //初始化互斥锁

LieProneState::LieProneState()
{
    cout << "LieProneState()私有构造函数" << endl;
}

LieProneState::~LieProneState()
{
    cout << "~LieProneState()析构函数" << endl;
}

IState *LieProneState::getInstance()
{
    if (pLieProneState == nullptr)
    {
        std::lock_guard<std::mutex> lock(mMutex); //自动上锁,自动解锁
        if (pLieProneState == nullptr)
        {
            pLieProneState = new LieProneState();
        }
    }
    return pLieProneState;
}

void LieProneState::down(IPerson *person)
{
    cout << typeid(this).name() << "::" << __FUNCTION__ << "():: 没有下一个状态" << endl;
}

void LieProneState::up(IPerson *person)
{
    person->setState(SquatState::getInstance());
}

void LieProneState::action(IPerson *person)
{
    cout << "LieProneState::action():: 匍匐 ..." << endl;
}