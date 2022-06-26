#include "../include/SelectionSort.h"

/**
 * @brief 选择排序
 * 
 * @param arr 容器内容
 */
void SelectionSort::sortVector(std::vector<int> &vi)
{
        printVector("选择排序前:", vi);
        // 需要进行 n-1 轮
        for (unsigned  int i = 0; i < vi.size() - 1; ++i) 
        {
            // 找到此轮的最小值下标
            unsigned   int min_index = i;
            for (unsigned  int j = i + 1; j < vi.size(); ++j) 
            {
                if (vi[j] < vi[min_index]) 
                {
                    min_index = j;
                }
            }
            std::swap(vi[i], vi[min_index]);
        }
        printVector("选择排序后:", vi);
}