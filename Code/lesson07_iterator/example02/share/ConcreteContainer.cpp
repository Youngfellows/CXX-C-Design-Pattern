#include "../include/ConcreteContainer.h"

//在类外实现模板函数
template <typename Item>
ConcreteContainer<Item>::ConcreteContainer()
{
    cout << "ConcreteContainer()构造函数" << endl;
    this->data = new vector<Item>();
}

//在类外实现模板函数
template <typename Item>
ConcreteContainer<Item>::~ConcreteContainer()
{
    cout << "~ConcreteContainer()析构函数" << endl;
}

//在类外实现模板函数
template <typename Item>
Item & ConcreteContainer<Item>::operator[](int index)//覆写[]函数
{
    if(index < this->data->size())
    {
        return this->data->at(index);
    } 
    return nullptr;
}

//在类外实现模板函数
template <typename Item>
int ConcreteContainer<Item>::getSize()
{
    return this->data->size();
}

//在类外实现模板函数
template <typename Item>
void ConcreteContainer<Item>::pushItem(const Item & item)
{
    this->data->push_back(item);
}

//在类外实现模板函数
template <typename Item>
Iterator<Item> * ConcreteContainer<Item>::getIterator()
{
    if(iter == nullptr)
    {
        iter = new ConcreteIterator<Item>(this);
    }
    return iter;
}