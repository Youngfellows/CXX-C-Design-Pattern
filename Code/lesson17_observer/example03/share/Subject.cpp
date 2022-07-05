#include "../include/Subject.h"

Subject::Subject()
{
    cout << "Subject()构造函数" << endl;
    this->observers = new std::list<Observer *>();
}

Subject::~Subject()
{
    cout << "~Subject()析构函数" << endl;
}

/**
 * @brief 注册观察者
 *
 * @param observer 观察者
 */
void Subject::attach(Observer *observer)
{
    std::list<Observer *>::iterator iter = std::find(this->observers->begin(), this->observers->end(), observer);
    if (iter == this->observers->end())
    {
        cout << "Subject::attach():: 注册观察者到被观察者" << endl;
        this->observers->push_back(observer);
    }
    else
    {
        cout << "Subject::attach():: 已经被注册到被观察者了 ..." << endl;
    }
}

/**
 * @brief 注销观察者
 *
 * @param observer 观察者
 */
void Subject::detach(Observer *observer)
{
    std::list<Observer *>::iterator iter = std::find(this->observers->begin(), this->observers->end(), observer);
    if (iter != this->observers->end())
    {
        cout << "Subject::detach():: 移除观察者 ..." << endl;
        this->observers->remove(observer);
    }
    else
    {
        cout << "Subject::detach():: 不存在在观察者 ..." << endl;
    }

    this->observers->remove(observer);
}

/**
 * @brief 通知所有观察者
 *
 */
void Subject::notify()
{
    std::list<Observer *>::iterator iter;
    for (iter = this->observers->begin(); iter != this->observers->end(); iter++)
    {
        Observer *observer = *iter; //获取到观察者
        observer->update();         //通知观察者数据变化了
    }
}