#ifndef MEMENTO_H
#define MEMENTO_H

#include "./Global.h"
#include "./Originator.h"

/**
 * @brief 备忘录: 该对象由Originator创建，主要用来保存Originator的内部状态
 *
 */
class Memento
{
private:
    State state; //被保存的数据原生者状态数据

private:
    //这是最关键的地方，将Originator为friend类，在Originator可以访问Memento的私有的內部信息，但是其他类不能访问Memento私有的內部信息
    friend class Originator;
    Memento(State state);
    void setState(State state); //设置数据
    State getState();           //获取数据
    
public:
    ~Memento();
};
#endif