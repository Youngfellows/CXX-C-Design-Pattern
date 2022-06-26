#include "../include/BubbleSort.h"

/**
 * @brief 冒泡排序
 * 
 * @param arr 容器内容
 */
void BubbleSort::sortVector(std::vector<int> &vi)
{
        printVector("冒泡排序前:", vi);
        unsigned  int len = vi.size();
        // 轮次: 从1到n-1轮
        for (unsigned  int i = 0; i < len - 1; ++i) 
        {
            // 优化: 判断本轮是否有交换元素, 如果没交换则可直接退出
            bool is_exchange = false;
            for (unsigned int j = 0; j < len - i - 1; ++j) 
            {
                if (vi[j] > vi[j+1]) {
                    std::swap(vi[j], vi[j+1]);
                    is_exchange = true;
                }
            }
            // 如果本轮无交换, 则可以直接退出
            if (!is_exchange) 
            {
                printVector("冒泡排序后:", vi);
                return;
            }
        }
        printVector("冒泡排序后:", vi);
}