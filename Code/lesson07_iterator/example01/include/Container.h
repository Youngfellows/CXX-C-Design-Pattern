#ifndef CONTAINER_H
#define CONTAINER_H

#include "./Global.h"
#include "./Iterator.h"

/**
 * @brief 抽象类: 容器接口
 * 
 */
class Container
{
    public:
       virtual ~Container();
    
       /**
        * @brief 添加元素到容器
        * 
        * @param item 元素
        */
       virtual void add(std::shared_ptr<Object> item) = 0;
       
       /**
        * @brief 移除自定位置的元素
        * 
        * @param pos 位置
        */
       virtual void remove(std::shared_ptr<Object> pos) = 0;
       
       /**
        * @brief 获取容器大小
        * 
        * @return int 返回容器大小
        */
       virtual int size() = 0;
       
       /**
        * @brief 获取元素
        * 
        * @return std::shared_ptr<Object> 返回元素指针变量
        */
       virtual std::shared_ptr<Object> getItem(int index) = 0;
       
       /**
        * @brief 获取迭代器
        * 
        * @return std::shared_ptr<Iterator> 返回迭代器指针变量
        */
       virtual std::shared_ptr<Iterator> createIterator() = 0;
};
#endif