#ifndef CONCRETE_CONTAINER_H
#define CONCRETE_CONTAINER_H

#include "./Container.h"
#include "./ConcreteIterator.h"

/**
 * @brief 具体类: 具体的容器实现类
 * @brief 使用泛型实现
 * 
 * @tparam Item 
 */
template <typename Item>
class ConcreteContainer : public Container<Item>
{
    private:
        vector<Item> *data;//数据集
        Iterator<Item> *iter = nullptr;//迭代器

    public:
       ConcreteContainer();
       ~ConcreteContainer();
       virtual Item & operator[](int index) override;//覆写[]函数
       virtual int getSize() override;//覆写getSize()函数,获取容器大小
       virtual void pushItem(const Item & item) override;//覆写pushItem()函数,添加元素
       virtual Iterator<Item> * getIterator() override;//覆写getIterator()函数,获取迭代器
};
#endif