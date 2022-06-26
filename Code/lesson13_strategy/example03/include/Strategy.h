#ifndef STRATEGY_H
#define STRATEGY_H

/**
 * @brief 抽象类: 算法抽象接口
 * 
 */
class Strategy
{
    public:
       virtual ~Strategy() = default;

       /**
        * @brief 纯虚函数,算法的抽象接口
        * 
        * @param num1 数字1
        * @param num2 数字2
        * @return double 算法的结果
        */
       virtual double doOperation(double num1,double num2) = 0;
};
#endif