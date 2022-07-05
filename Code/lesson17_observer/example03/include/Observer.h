#ifndef OBSERVER_H
#define OBSERVER_H

#include "./Global.h"
#include "./Subject.h"

//先定义类,后声明
class Subject;

/**
 * @brief 抽象类: 抽象观察者
 *
 */
class Observer
{
protected:
    Subject *subject = nullptr;

public:
    Observer() = default;
    Observer(Subject *subject);
    virtual ~Observer();

    /**
     * @brief 纯虚函数,被观察数据变化了
     *
     */
    virtual void update() = 0;
};
#endif