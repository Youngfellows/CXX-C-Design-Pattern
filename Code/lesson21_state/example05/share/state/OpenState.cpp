#include "../../include/state/OpenState.h"

//在类外初始化静态属性
INetworkState *OpenState::instance = nullptr;

OpenState::OpenState()
{
    cout << "OpenState()私有构造函数" << endl;
}

OpenState::~OpenState()
{
    cout << "~OpenState()析构函数" << endl;
}

INetworkState *OpenState::getInstance()
{
    if (instance == nullptr)
    {
        instance = new OpenState();
    }
    return instance;
}

void OpenState::operation1()
{
    cout << " OpenState::operation1():: ..." << endl;
    this->next = CloseState::getInstance();
}

void OpenState::operation2()
{
    cout << " OpenState::operation2():: ..." << endl;
    this->next = ConnectState::getInstance();
}

void OpenState::operation3()
{
    cout << " OpenState::operation3():: ..." << endl;
    this->next = OpenState::getInstance();
}
