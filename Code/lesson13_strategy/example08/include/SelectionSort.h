#ifndef SELECT_SORT_H
#define SELECT_SORT_H

#include "./Sort.h"
#include "./PrintVector.h"

/**
 * @brief  具体策略类: 选择排序
 * 
 */
class SelectionSort : public Sort, private PrintVector
{
    private:
        
    public:
        SelectionSort() = default;
        ~SelectionSort() = default;
        virtual void sortVector(std::vector<int> &vi) override;//实现override()函数
};
#endif