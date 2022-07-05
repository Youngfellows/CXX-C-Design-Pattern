#ifndef IOBSERVER_H
#define IOBSERVER_H

#include "./Global.h"

//先声明类,后面再定义
class ISubject;

/**
 * @brief 抽象类: 抽象观察者
 *
 */
class IObserver
{
protected:
    ISubject *subject = nullptr; //被观察者

public:
    /**
     * @brief 构造函数
     *
     * @param subject 被观察者
     */
    IObserver(ISubject *subject);

    /**
     * @brief 默认析构函数
     *
     */
    virtual ~IObserver() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 接收被观察者传递过来的数据
     *
     * @param action 被观察者的动作
     */
    virtual void update(std::string action) = 0;
};
#endif