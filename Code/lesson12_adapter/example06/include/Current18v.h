#ifndef CURRENT18V_H
#define CURRENT18V_H


/**
 * @brief 抽象类接口: 使用18v电压
 * 
 */
class Current18v
{
    public:
        Current18v() = default;
        virtual ~Current18v() = default;

        /**
         * @brief 纯虚函数,抽象接口: 使用18v
         * 
         */
        virtual void useCurrent18v() = 0;
};
#endif