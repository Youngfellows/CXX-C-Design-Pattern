#ifndef BASE_SUBJECT_H
#define BASE_SUBJECT_H

#include "./Subject.h"

/**
 * @brief 抽象主题基类
 * @brief 在基类实现注册观察者，注销观察者，已经通知观察者等，简化派生类
 */
class BaseSubject : public Subject
{
private:
    std::shared_ptr<std::unordered_set<std::shared_ptr<Observer>>> observers = nullptr; //观察者列表

public:
    BaseSubject();
    virtual ~BaseSubject();
    virtual void registerObserver(std::shared_ptr<Observer> observer) override; //实现registerObserver()函数
    virtual void removeObserver(std::shared_ptr<Observer> observer) override;   //实现removeObserver()函数
    virtual void notifyObservers() override;                                    //实现notifyObservers()函数
};
#endif