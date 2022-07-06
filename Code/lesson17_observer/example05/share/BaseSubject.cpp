#include "../include/BaseSubject.h"

BaseSubject::BaseSubject()
{
    cout << "BaseSubject()构造函数" << endl;
    this->observers = new std::unordered_set<Observer *>();
}

BaseSubject::~BaseSubject()
{
    cout << "~BaseSubject()析构函数" << endl;
}

/**
 * @brief 在被观察者注册观察者到观察者列表
 *
 * @param observer 观察者
 */
void BaseSubject::registerObserver(Observer *observer)
{
    this->observers->insert(observer);
}

/**
 * @brief 在被观察者移除观察者到观察者列表
 *
 * @param observer 观察者
 */
void BaseSubject::removeObserver(Observer *observer)
{
    this->observers->erase(observer);
}

void BaseSubject::notifyObservers()
{
    //遍历观察者
    for (auto observer : *this->observers)
    {
        observer->update(); //通知每一个观察者
    }

    //遍历观察者
    // auto iter = this->observers->begin();
    // while (iter != this->observers->end())
    // {
    //     Observer *observer = *iter;
    //     observer->update(); //通知每一个观察者
    // }
}
