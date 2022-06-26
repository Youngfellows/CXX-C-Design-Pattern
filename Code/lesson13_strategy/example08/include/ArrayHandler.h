#ifndef ARRAY_HANDLER_H
#define ARRAY_HANDLER_H

#include "./Sort.h"
#include "./Global.h"

class ArrayHandler {
    public:
        void sortVector(std::vector<int> &arr) 
        {
            return sort_->sortVector(arr);
        }
        void setSortStrategy(Sort* sort) 
        {
            sort_ = sort;
        }

    private:
        Sort *sort_;
};

#endif