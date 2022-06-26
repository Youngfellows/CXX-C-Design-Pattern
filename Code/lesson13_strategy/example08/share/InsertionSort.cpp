#include "../include/InsertionSort.h"

/**
 * @brief 插入排序
 * 
 * @param arr 容器内容
 */
void InsertionSort::sortVector(std::vector<int> &vi)
{
        printVector("插入排序前:", vi);
        // 第一轮不需要操作, 第二轮比较一次, 第n轮比较 n-1 次
        for (unsigned  int i = 1; i < vi.size(); ++i) 
        {
            // 存储待插入的值和下标
            unsigned  int insert_value = vi[i];
            unsigned  int j = i - 1;

            while (j >= 0 && vi[j] > insert_value) 
            {
                vi[j + 1] = vi[j];  // 如果左侧的已排序元素比目标值大, 那么右移
                j--;
            }

            // 注意这里insert_index 需要+1
            vi[j + 1] = insert_value;
        }
        printVector("插入排序后:", vi);
}