#include "../include/PrintVector.h"

/**
 * @brief  打印vector内容
 * 
 * @param prefix 前缀
 * @param vi 容器内容
 */
void PrintVector::printVector(const std::string prefix, const std::vector<int> &vi)
{
    std::cout << prefix;
    for (auto i : vi) {
        std::cout << " " << i;
    }
    std::cout << std::endl;
}
