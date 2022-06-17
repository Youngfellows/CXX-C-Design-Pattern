#ifndef CONTAINER_H
#define CONTAINER_H

#include "./Global.h"
#include "./Iterator.h"

/**
 * @brief 抽象类: Container容器接口
 * @brief 使用模板类来实现
 */
template <typename Item>
class Container
{
    public:
       virtual ~Container();
       virtual int getSize() = 0;//获取容器大小
       virtual void pushItem(const Item & item) = 0;//添加元素
       virtual Item & operator[](int index) = 0;//获取元素,重载[]运算符
       virtual Iterator<Item> * getIterator() = 0;//获取迭代器
};
#endif