#ifndef CONCRETE_ITERATOR_H
#define CONCRETE_ITERATOR_H

#include "./Iterator.h"
#include "./Container.h"

/**
 * @brief 具体类: 创建实现Iterator的实体类
 * 
 */
template <typename Item>
class ConcreteIterator : public Iterator<Item>
{
    private:
        int index;//当前索引
        Container<Item> *container;//容器
    public:
        ConcreteIterator(Container<Item> *container)
        {
            cout << "ConcreteIterator()构造函数" << endl;
            this->container = container;
        }

        ~ConcreteIterator()
        {
            cout << "~ConcreteIterator()析构函数" << endl;
        }

        virtual void first() override //覆写first()函数
        {
            this->index = 0;
        }

        virtual void next() override //覆写next()函数
        {
            if(this->index < this->container->getSize())
            {
                this->index++;
            }
        }

        virtual bool isEnd() override//覆写isEnd()函数
        {
            return this->index >= this->container->getSize();
        }


        virtual Item  curItem() override//覆写curItem()函数
        {
            if(this->index < this->container->getSize())
            {
                return (*(this->container))[this->index];
            }
            return nullptr;
        }
};
#endif