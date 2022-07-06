#include "../include/NumGen.h"

NumGen::NumGen()
{
    cout << "NumGen()构造函数" << endl;
    this->observers = new std::vector<Observer *>();
}

NumGen::~NumGen()
{
    cout << "~NumGen()析构函数" << endl;
    //释放内存
    std::vector<Observer *>::iterator iter;
    for (iter = this->observers->begin(); iter != this->observers->end(); iter++)
    {
        Observer *observer = *iter;
        this->observers->erase(iter);
        delete observer;
    }
    this->observers->clear();
}

/**
 * @brief 注册观察者到观察者列表
 *
 * @param observer 观察者
 */
void NumGen::addObserver(Observer *observer)
{
    this->observers->push_back(observer);
}

/**
 * @brief 在观察者列表中移除观察者
 *
 * @param observer 观察者
 */
void NumGen::deleteObserver(Observer *observer)
{
    // this->observers->erase(observer);//移除vector容器中的元素
    this->observers->erase(std::remove(this->observers->begin(), this->observers->end(), observer), this->observers->end());
}

/**
 * @brief 被观察者数据变化,通知所有观察者
 *
 */
void NumGen::notifyObservers()
{
    //遍历观察者并通知
    for (auto observer : *this->observers)
    {
        observer->update(); //通知各个观察者
    }

    //遍历观察者并通知
    std::vector<Observer *>::iterator iter;
    for (iter = this->observers->begin(); iter != this->observers->end(); iter++)
    {
        Observer *observer = *iter;
        observer->update(); //通知各个观察者
    }
}