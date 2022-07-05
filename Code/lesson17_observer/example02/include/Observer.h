#ifndef OBSERVER_H
#define OBSERVER_H

#include "./Global.h"
#include "./Subject.h"

//先声明类,后面再定义
class Subject;

class Observer
{
protected:
    Subject *subject = nullptr; //被观察者
    State state;                //接收被观察者变化的数据

public:
    Observer(Subject *subject);
    virtual ~Observer();

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 接收观察者的数据变化
     *
     */
    virtual void update() = 0;

    /**
     * @brief 打印信息
     *
     */
    virtual void printInfo() = 0;
};
#endif