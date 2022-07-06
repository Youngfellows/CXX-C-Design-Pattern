#ifndef OBSERVER_H
#define OBSERVER_H

#include "./Global.h"
#include "./Subject.h"

//先声明类,后面再定义
class Subject;

/**
 * @brief 抽象类: 抽象被观察者
 *
 */
class Observer
{
protected:
    std::shared_ptr<Subject> subject = nullptr; //被观察者

public:
    Observer() = default;
    Observer(std::shared_ptr<Subject> subject);
    virtual ~Observer();

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 提供给被观察者调用的,被观察数据变化,通知观察者
     *
     */
    virtual void update() = 0;
};
#endif