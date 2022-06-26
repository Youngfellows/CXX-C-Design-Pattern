#ifndef ICONTEXT_H
#define ICONTEXT_H

/**
 * @brief 抽象类接口,客户端接口
 * 
 */
class IContext
{
    public:
        IContext() = default;
        ~IContext() = default;

        /**
         * @brief 纯虚函数,算法客户端接口
         * 
         * @param num1 数字1
         * @param num2 数字2
         * @return double 返回算法执行结果
         */
        virtual double excuteStrategy(double num1,double num2) = 0;
};

#endif