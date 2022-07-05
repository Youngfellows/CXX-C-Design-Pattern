#include "../../include/observer/HexaObserver.h"

HexaObserver::HexaObserver()
{
    cout << "HexaObserver()构造函数" << endl;
}

HexaObserver::~HexaObserver()
{
    cout << "~HexaObserver()析构函数" << endl;
}

/**
 * @brief 获取被观察者被观察变化的数据
 *
 */
void HexaObserver::update()
{
    State state = this->subject->getState();
    cout << "HexaObserver::update():: state:" << std::hex << state << endl;
}