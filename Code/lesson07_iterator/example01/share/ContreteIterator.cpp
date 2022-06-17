#include "../include/ContreteIterator.h"

ContreteIterator::ContreteIterator(std::shared_ptr<Container> container)
{
    cout << "ContreteIterator()构造函数" << endl;
    this->container = container;
}

ContreteIterator::~ContreteIterator()
{
    cout << "~ContreteIterator()析构函数" << endl;
}

void ContreteIterator::first()//覆写first()函数
{
    this->index = 0;
}

void ContreteIterator::end()//覆写end()函数
{
    this->index = this->container->size() - 1;
}

void ContreteIterator::next()//覆写next()函数
{
    if(this->index < this->container->size())
    {
        this->index++;
    }
}

void ContreteIterator::previous()//覆写previous()函数
{
    if(this->index > 0)
    {
        this->index--;
    }
}

bool ContreteIterator::isEnd()//覆写isEnd())函数
{
    return (this->index == this->container->size() - 1);
}

std::shared_ptr<Object> ContreteIterator::get()//覆写get())函数
{
    //cout << "ContreteIterator::get():: index=" << this->index << endl;
    return this->container->getItem(this->index);
}
