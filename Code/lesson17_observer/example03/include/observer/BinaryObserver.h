#ifndef BINARY_OBSERVER_H
#define BINARY_OBSERVER_H

#include "../Observer.h"

/**
 * @brief 派生类: 二进制数据观察者
 *
 */
class BinaryObserver : public Observer
{
public:
    using Observer::Observer; //使用父类普通函数及其构造函数
    BinaryObserver();
    ~BinaryObserver();
    virtual void update() override; //实现update()函数
};

#endif
