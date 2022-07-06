#include "../include/Publisher.h"

Publisher::Publisher()
{
    cout << "Publisher()构造函数" << endl;
    this->observers = new std::vector<Subscriber *>();
}

Publisher::~Publisher()
{
    cout << "~Publisher()析构函数" << endl;
    //释放内存
    std::vector<Subscriber *>::iterator iter;
    for (iter = this->observers->begin(); iter != this->observers->end(); iter++)
    {
        Subscriber *observer = *iter;
        this->observers->erase(iter);
        delete observer;
    }
}

/**
 * @brief 注册观察者到被观察者的观察者列表
 *
 * @param observer 观察者
 */
void Publisher::attach(Subscriber *observer)
{
    // this->observers->push_back(observer);

    //查找观察者释放存在于观察者列表中
    std::vector<Subscriber *>::iterator iter = std::find(this->observers->begin(), this->observers->end(), observer);
    if (iter == this->observers->end())
    {
        cout << "Publisher::attach():: 插入观察者到观察者列表中 ..." << endl;
        this->observers->push_back(observer);
    }
    else
    {
        cout << "Publisher::attach():: 观察者已经存在于观察者列表中 ..." << endl;
    }
}

/**
 * @brief 从观察者列表中移除观察者
 *
 * @param observer 观察者
 */
void Publisher::detach(Subscriber *observer)
{
    std::vector<Subscriber *>::iterator iter;
    for (iter = this->observers->begin(); iter != this->observers->end(); iter++)
    {
        if (observer == *iter)
        {
            this->observers->erase(iter);
            break;
        }
    }
}

/**
 * @brief 被观察者数据变化,通知所有的观察者
 *
 */
void Publisher::notifyObservers()
{
    //遍历观察者列表并通知
    for (Subscriber *observer : *this->observers)
    {
        observer->update();
    }

    //遍历观察者列表并通知
    // std::vector<Subscriber *>::iterator iter;
    // for (iter = this->observers->begin(); iter != this->observers->end(); iter++)
    // {
    //     Subscriber *observer = *iter;
    //     observer->update();
    // }
}