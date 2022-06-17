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
       ConcreteContainer()
       {
            cout << "ConcreteContainer()构造函数" << endl;
            this->data = new vector<Item>();
       }


       ~ConcreteContainer()
       {
            cout << "~ConcreteContainer()析构函数" << endl;
       }

       virtual Item operator[](int index) override//覆写[]函数
       {
            if(index < this->data->size())
            {
                return this->data->at(index);
            }
       }

       virtual int getSize() override//覆写getSize()函数,获取容器大小
       {
            return this->data->size();
       }


       virtual void pushItem(const Item & item) override//覆写pushItem()函数,添加元素
       {
            this->data->push_back(item);
       }

       virtual Iterator<Item> * getIterator() override//覆写getIterator()函数,获取迭代器
       {
            if(iter == nullptr)
            {
                iter = new ConcreteIterator<Item>(this);
            }
            return iter;
       }
};
#endif