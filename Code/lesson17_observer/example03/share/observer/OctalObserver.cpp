#include "../../include/observer/OctalObserver.h"

OctalObserver::OctalObserver()
{
    cout << "OctalObserver()构造函数" << endl;
}

OctalObserver::~OctalObserver()
{
    cout << "~OctalObserver()析构函数" << endl;
}

/**
 * @brief 获取被观察者被观察变化的数据
 *
 */
void OctalObserver::update()
{
    State state = this->subject->getState();
    cout << "OctalObserver::update():: state:" << std::oct << state << endl;
}
