#ifndef DIGIT_OBSERVER_H
#define DIGIT_OBSERVER_H

#include "../Observer.h"
#include "../NumGen.h"

/**
 * @brief 派生类: 数字观察者
 *
 */
class DigitObserver : public Observer
{
public:
    using Observer::Observer; //能够使用父类的构造函数和方法
    DigitObserver();
    ~DigitObserver();
    virtual void update() override; //实现update()函数
};
#endif