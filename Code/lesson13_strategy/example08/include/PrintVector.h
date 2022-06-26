#ifndef PRINT_VECTOR_H
#define PRINT_VECTOR_H

#include "./Global.h"

class PrintVector
{
    public:
        PrintVector() = default;
        ~PrintVector() = default;
        void printVector(const std::string prefix, const std::vector<int> &vi);
};
#endif