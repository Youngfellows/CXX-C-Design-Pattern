#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include "./Sort.h"
#include "./PrintVector.h"

/**
 * @brief  具体策略类: 冒泡排序
 * 
 */
class BubbleSort : public Sort, private PrintVector
{
    private:
        
    public:
        BubbleSort() = default;
        ~BubbleSort() = default;
        virtual void sortVector(std::vector<int> &vi) override;//实现override()函数
};
#endif