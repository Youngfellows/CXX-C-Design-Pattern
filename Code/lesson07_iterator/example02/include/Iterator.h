#ifndef ITERATOR_H
#define ITERATOR_H

#include "./Global.h"

/**
 * @brief 创建接口: 迭代器接口 
 * @brief 使用模板类
 * 
 */
template <typename Item>
class Iterator
{ 
    public:
        virtual ~Iterator();
        virtual void first() = 0;//第一个
        virtual void next() = 0;//下一个
        virtual bool isEnd() = 0;//是否最后一个
        virtual Item curItem() = 0;//获取当前元素
};
#endif