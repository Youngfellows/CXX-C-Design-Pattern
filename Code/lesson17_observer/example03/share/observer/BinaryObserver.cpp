#include "../../include/observer/BinaryObserver.h"

BinaryObserver::BinaryObserver()
{
    cout << "BinaryObserver()构造函数" << endl;
}

BinaryObserver::~BinaryObserver()
{
    cout << "~BinaryObserver()析构函数" << endl;
}

/**
 * @brief 获取被观察者被观察变化的数据
 *
 */
void BinaryObserver::update()
{
    State state = this->subject->getState();
    cout << "BinaryObserver::update():: state:" << std::bitset<32>(state) << endl;
}