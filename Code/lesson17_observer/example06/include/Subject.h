#ifndef SUBJECT_H
#define SUBJECT_H

#include "./Observer.h"

//先声明类,后面再定义
class Observer;

/**
 * @brief 抽象类: 抽象被观察者
 *
 */
class Subject
{
public:
    virtual ~Subject() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 注册观察者到被观察者
     *
     * @param observer 观察者
     */
    virtual void addObserver(Observer *observer) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 从被观察者的观察者列表移除观察者
     *
     * @param observer 观察者
     */
    virtual void deleteObserver(Observer *observer) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 被观察者数据变化,通知观察者
     *
     */
    virtual void notifyObservers() = 0;
};
#endif