#ifndef CONCRETE_SUBJECT_H
#define CONCRETE_SUBJECT_H

#include "../Subject.h"

/**
 * @brief 派生类: 具体被观察者
 *
 */
class ConcreteSubject : public Subject
{
private:
    State state; //被观察数据

public:
    ConcreteSubject();
    ~ConcreteSubject();
    virtual void setState(State state) override; //实现setState()函数
    virtual State getState() override;           //实现getState()函数
};
#endif