#ifndef GRAPH_OBSERVER_H
#define GRAPH_OBSERVER_H

#include "../Observer.h"
#include "../NumGen.h"

/**
 * @brief 派生类: 图形数字观察者
 *
 */
class GraphObserver : public Observer
{
public:
    using Observer::Observer; //能够使用父类的构造函数和方法
    GraphObserver();
    ~GraphObserver();
    virtual void update() override; //实现update()函数
};
#endif