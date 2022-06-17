#ifndef CONTRETE_CONTAINER_H
#define CONTRETE_CONTAINER_H

#include "./Container.h"
#include "./ContreteIterator.h"

/**
 * @brief 具体类: 容器实现类
 * 
 */
class ContreteContainer : public Container
{
    private:
        std::shared_ptr<vector<std::shared_ptr<Object>>> data;//保存数据的集合,智能指针
        int index;//当前索引

    public:
        ContreteContainer();
        ContreteContainer(ContreteContainer & other);
        ~ContreteContainer();
        void add(std::shared_ptr<Object> item) override;//覆写add()函数
        void remove(std::shared_ptr<Object> pos) override;//覆写remove()函数
        int size() override;//覆写size()函数
        std::shared_ptr<Object> getItem(int index) override;//覆写getItem()函数
        std::shared_ptr<Iterator> createIterator() override;//覆写createIterator()函数
};
#endif