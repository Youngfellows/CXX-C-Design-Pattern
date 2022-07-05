#ifndef SECRETARY_H
#define SECRETARY_H

#include "../Global.h"
#include "../ISubject.h"

/**
 * @brief 派生类: 被观察者具体实现,秘书
 *
 */
class Secretary : public ISubject
{
private:
    std::string name;                            //秘书姓名
    std::list<IObserver *> *observers = nullptr; //观察者列表

public:
    Secretary(std::string name);
    ~Secretary();
    virtual void attach(IObserver *observer) override; //实现attach()函数
    virtual void detach(IObserver *observer) override; //实现detach()函数
    virtual void notify(std::string action) override;  //实现notify()函数
};
#endif