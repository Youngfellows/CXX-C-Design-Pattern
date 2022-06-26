#ifndef SORT_H
#define SORT_H

#include "./Global.h"

/**
 * @brief 抽象策略类: 排序
 * 
 */
class Sort
{
    public:
       virtual ~Sort() = default;

        /**
         * @brief 纯虚函数,抽象接口: 对列表进行排序
         * 
         * @param arr 
         */
       virtual void sortVector(std::vector<int> &arr) = 0;
};
#endif