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
        ConcreteIterator(Container<Item> *container);
        ~ConcreteIterator();
        virtual void first() override;//覆写first()函数
        virtual void next() override;//覆写next()函数
        virtual bool isEnd() override;;//覆写isEnd()函数
        virtual Item curItem() override;;//覆写curItem()函数
};
#endif