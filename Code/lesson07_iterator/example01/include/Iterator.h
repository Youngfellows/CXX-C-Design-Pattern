#ifndef ITERATOR_H
#define ITERATOR_H

#include "./Global.h"

/**
 * @brief 抽象类: 迭代器接口
 * 
 */
class Iterator
{
    public:
        virtual ~Iterator();
        /**
         * @brief 第1个元素
         * 
         */
        virtual void first() = 0;

        /**
         * @brief 最后一个
         * 
         */
        virtual void end() = 0;

        /**
         * @brief 下一个
         * 
         */
        virtual void next() = 0;

        /**
         * @brief 上一个
         * 
         */
        virtual void previous() = 0;

        /**
         * @brief 是否最后一个
         * 
         * @return true 是最后一个
         * @return false 不是最后一个
         */
        virtual bool isEnd() = 0;

        /**
         * @brief 获取当前位置的元素
         * 
         * @return std::shared_ptr<Object> 当前位置元素的指针变量
         */
        virtual std::shared_ptr<Object> get() = 0;
};

#endif