#include "../include/Memento.h"

Memento::Memento(State state)
{
    cout << "Memento()构造函数" << endl;
    this->state = state;
}

Memento::~Memento()
{
    cout << "~Memento()析构函数" << endl;
}

void Memento::setState(State state)
{
    this->state = state;
}

State Memento::getState()
{
    return this->state;
}
