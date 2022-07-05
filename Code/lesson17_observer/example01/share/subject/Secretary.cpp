#include "../../include/subject/Secretary.h"

Secretary::Secretary(std::string name)
{
    cout << "Secretary()构造函数" << endl;
    this->name = name;
    this->observers = new std::list<IObserver *>();
}

Secretary::~Secretary()
{
    cout << "~Secretary()析构函数" << endl;
    // if (this->observers != nullptr)
    // {
    //     std::list<IObserver *>::iterator iter;
    //     for (iter = this->observers->begin(); iter != this->observers->end(); iter++)
    //     {
    //         IObserver *oberser = *iter;
    //         delete oberser;
    //     }
    //     this->observers->clear();
    // }
    // this->observers = nullptr;
}

void Secretary::attach(IObserver *observer)
{
    this->observers->push_back(observer);
}

void Secretary::detach(IObserver *observer)
{
    if (this->observers != nullptr)
    {
        std::list<IObserver *>::iterator iter;
        for (iter = this->observers->begin(); iter != this->observers->end(); iter++)
        {
            if (*iter == observer)
            {
                //delete observer;              //释放内存
                this->observers->erase(iter); //删除元素
                break;
            }
        }
    }
}

/**
 * @brief 被观察者数据变化,通知各个观察者
 *
 * @param action 被观察变化的数据
 */
void Secretary::notify(std::string action)
{
    if (this->observers != nullptr)
    {
        std::list<IObserver *>::iterator iter;
        for (iter = this->observers->begin(); iter != this->observers->end(); iter++)
        {
            IObserver *observer = *iter;
            observer->update(action); //通知各个观察者
        }
    }
}
