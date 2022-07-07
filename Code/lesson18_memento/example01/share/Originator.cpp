#include "../include/Originator.h"

Originator::Originator()
{
    cout << "Originator()无参数构成函数" << endl;
}

Originator::Originator(State state)
{
    cout << "Originator()有参数构成函数" << endl;
    this->state = state;
}

Originator::~Originator()
{
    cout << "~Originator()析构函数" << endl;
}

void Originator::setState(State state)
{
    this->state = state;
}

State Originator::getState()
{
    return this->state;
}

void Originator::display()
{
    cout << "Originator::display():: state:" << this->state << endl;
}

/**
 * @brief 创建备忘录,备份报错数据信息
 *
 * @return std::shared_ptr<Memento> 返回保存数据信息的备忘录
 */
std::shared_ptr<Memento> Originator::createMemento()
{
    std::shared_ptr<Memento> memento(new Memento(this->state));
    // return std::make_shared<Memento>(this->state);
    return memento;
}

/**
 * @brief 从备忘录恢复数据
 *
 * @param memento 备忘录
 */
void Originator::restoreToMemento(std::shared_ptr<Memento> memento)
{
    setState(memento->getState()); //从备忘录恢复数据
}