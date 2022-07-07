#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include "./Global.h"
#include "./Memento.h"

//先声明类,后面再定义
class Memento;

/**
 * @brief 原生者: 需要被保存状态以便恢复的那个对象
 *
 */
class Originator
{
private:
    State state; //状态数据

public:
    Originator();
    Originator(State state);
    ~Originator();
    void setState(State state);                              //设置数据
    State getState();                                        //获取数据
    std::shared_ptr<Memento> createMemento();                //创建备忘录
    void restoreToMemento(std::shared_ptr<Memento> memento); //从备忘录恢复数据
    void display();                                          //显示状态数据
};
#endif