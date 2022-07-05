#ifndef OCTAL_OBSERVER_H
#define OCTAL_OBSERVER_H

#include "../Observer.h"

/**
 * @brief 派生类: 8进制数据观察者
 *
 */
class OctalObserver : public Observer
{
public:
    using Observer::Observer; //使用父类普通函数及其构造函数
    OctalObserver();
    ~OctalObserver();
    virtual void update() override; //实现update()函数
};
#endif
