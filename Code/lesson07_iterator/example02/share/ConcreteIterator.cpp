#include "../include/ConcreteIterator.h"

//在类外实现模板函数
template <typename Item>
ConcreteIterator<Item>::ConcreteIterator(Container<Item> *container)
{
    cout << "ConcreteIterator()构造函数" << endl;
    this->container = container;
}

//在类外实现模板函数
template <typename Item>
ConcreteIterator<Item>::~ConcreteIterator()
{
    cout << "~ConcreteIterator()析构函数" << endl;
}

//在类外实现模板函数
template <typename Item>
void ConcreteIterator<Item>::first()//覆写first()函数
{
    this->index = 0;
}

//在类外实现模板函数
template <typename Item>
void ConcreteIterator<Item>::next()//覆写next()函数
{
    if(this->index < this->container->getSize())
    {
        this->index++;
    }
}

//在类外实现模板函数
template <typename Item>
bool ConcreteIterator<Item>::isEnd()
{
    return this->index >= this->container->getSize();
}

//在类外实现模板函数
template <typename Item>
Item ConcreteIterator<Item>::curItem()
{
    if(this->index < this->container->getSize())
    {
       return (*(this->container))[this->index];
    }
    return nullptr;
}