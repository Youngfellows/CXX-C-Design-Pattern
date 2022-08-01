#include "../../include/state/ConnectState.h"

//在类外初始化静态属性
INetworkState *ConnectState::instance = nullptr;

ConnectState::ConnectState()
{
    cout << "ConnectState()私有构造函数" << endl;
}

ConnectState::~ConnectState()
{
    cout << "~ConnectState()析构函数" << endl;
}

INetworkState *ConnectState::getInstance()
{
    if (instance == nullptr)
    {
        instance = new ConnectState();
    }
    return instance;
}

void ConnectState::operation1()
{
    cout << " CloseState::operation1():: ..." << endl;
    this->next = OpenState::getInstance();
}

void ConnectState::operation2()
{
    cout << " CloseState::operation2():: ..." << endl;
    this->next = CloseState::getInstance();
}

void ConnectState::operation3()
{
    cout << " CloseState::operation3():: ..." << endl;
    this->next = ConnectState::getInstance();
}