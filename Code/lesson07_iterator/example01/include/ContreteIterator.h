#ifndef CONTRETEL_ITERATOR_H
#define CONTRETEL_ITERATOR_H

#include "./Iterator.h"
#include "./Container.h"

/**
 * @brief 具体类: 迭代器实现类
 * 
 */
class ContreteIterator : public Iterator
{
    private:
        int index;//当前索引
        std::shared_ptr<Container> container;//容器

    public:
        ContreteIterator(std::shared_ptr<Container> container);
        ~ContreteIterator();
        void first() override;//覆写first()函数
        void end() override;//覆写end()函数
        void next() override;//覆写next()函数
        void previous() override;//覆写previous()函数
        bool isEnd() override;//覆写isEnd())函数
        std::shared_ptr<Object> get() override;//覆写get())函数
};
#endif