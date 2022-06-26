#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include "./Sort.h"
#include "./PrintVector.h"

/**
 * @brief  具体策略类: 插入排序
 * 
 */
class InsertionSort : public Sort, private PrintVector
{
    private:
        
    public:
        InsertionSort() = default;
        ~InsertionSort() = default;
        virtual void sortVector(std::vector<int> &vi) override;//实现override()函数
};
#endif