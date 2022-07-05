#ifndef PLAYSER_OBSERVER_H
#define PLAYSER_OBSERVER_H

#include "../IObserver.h"

/**
 * @brief 派生类: 玩家观察者
 *
 */
class PlayserObserver : public IObserver
{
private:
    std::string name; //玩家姓名

public:
    PlayserObserver(std::string name, ISubject *subject);
    ~PlayserObserver();
    virtual void update(std::string action) override; //实现update()函数
};
#endif