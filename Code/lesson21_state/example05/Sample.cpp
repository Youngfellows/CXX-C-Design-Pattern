#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //状态模式
    INetworkState *openState = OpenState::getInstance();
    std::shared_ptr<IProcessor> processor = std::make_shared<NetworkProcessor>(openState);
    processor->doAction1();
    processor->doAction2();
    processor->doAction3();

    cout << "1111111111111111" << endl;
    INetworkState *closeState = CloseState::getInstance();
    processor->setState(closeState);
    processor->doAction1();
    processor->doAction2();
    processor->doAction3();

    cout << "222222222222222" << endl;
    INetworkState *connectState = ConnectState::getInstance();
    processor->setState(connectState);
    processor->doAction1();
    processor->doAction2();
    processor->doAction3();

    delete openState;
    delete closeState;
    delete connectState;
    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}