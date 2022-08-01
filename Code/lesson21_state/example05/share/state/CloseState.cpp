#include "../../include/state/CloseState.h"

//在类外初始化静态属性
INetworkState *CloseState::instance = nullptr;

CloseState::CloseState()
{
    cout << "CloseState()私有构造函数" << endl;
}

CloseState::~CloseState()
{
    cout << "~CloseState()析构函数" << endl;
}

INetworkState *CloseState::getInstance()
{
    if (instance == nullptr)
    {
        instance = new CloseState();
    }
    return instance;
}

void CloseState::operation1()
{
    cout << " CloseState::operation1():: ..." << endl;
    this->next = ConnectState::getInstance();
}

void CloseState::operation2()
{
    cout << " CloseState::operation2():: ..." << endl;
    this->next = OpenState::getInstance();
}

void CloseState::operation3()
{
    cout << " CloseState::operation3():: ..." << endl;
    this->next = CloseState::getInstance();
}