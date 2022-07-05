#ifndef ISUBJECT_H
#define ISUBJECT_H

#include "./IObserver.h"

//先声明类,后面再定义
class IObserver;

/**
 * @brief 抽象类: 抽象被观察者类
 *
 */
class ISubject
{
public:
    virtual ~ISubject() = default;

    /**
     * @brief 注册观察者到被观察者
     *
     * @param observer 观察者
     */
    virtual void attach(IObserver *observer) = 0;

    /**
     * @brief 从被观察者移除观察者
     *
     * @param observer 观察者
     */
    virtual void detach(IObserver *observer) = 0;

    /**
     * @brief 被观察者数据变化,通知观察者
     *
     */
    virtual void notify(std::string action) = 0;
};

#endif