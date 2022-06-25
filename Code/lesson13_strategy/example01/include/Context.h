#ifndef CONTEXT_H
#define CONTEXT_H

#include "./Strategy.h"
#include "./Global.h"

/**
 * @brief 算法的实现和客户端的使用解耦合
 * @brief 使得算法变化，不会影响客户端
 * 
 */
class Context
{
    private:
        std::unique_ptr<Strategy> strategy = nullptr;//算法实现

    public:
        Context() = default;
        Context(std::unique_ptr<Strategy> strategy);
        void setStrategy(std::unique_ptr<Strategy> strategy);
        void myoperator();
        ~Context();
};
#endif