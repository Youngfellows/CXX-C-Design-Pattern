#ifndef NUM_GEN_H
#define NUM_GEN_H

#include "./Global.h"
#include "./Subject.h"

/**
 * @brief 派生类: 数字生成器(被观察者基类)
 *
 */
class NumGen : public Subject
{
private:
    std::vector<Observer *> *observers = nullptr; //观察者列表

public:
    NumGen();
    virtual ~NumGen();
    virtual void addObserver(Observer *observer) override;    //实现addObserver()函数
    virtual void deleteObserver(Observer *observer) override; //实现deleteObserver()函数
    virtual void notifyObservers() override;                  //实现notifyObservers()函数
    virtual void excute() = 0;                                //产生数据
    virtual int getNumber() = 0;                              //获取产生的数据
};
#endif