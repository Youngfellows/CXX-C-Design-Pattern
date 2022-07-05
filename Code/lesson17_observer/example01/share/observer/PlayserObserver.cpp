#include "../../include/observer/PlayserObserver.h"

/**
 * @brief 构造函数,初始化父类熟悉
 *
 * @param name 玩家姓名
 * @param subject 被观察者
 */
PlayserObserver::PlayserObserver(std::string name, ISubject *subject) : IObserver(subject)
{
    cout << "PlayserObserver()构造函数" << endl;
    this->name = name;
    this->subject = subject;
}

PlayserObserver::~PlayserObserver()
{
    cout << "~PlayserObserver()析构函数" << endl;
}

void PlayserObserver::update(std::string action)
{
    cout << "玩家:" << this->name << ",接收到消息:" << action << endl;
}