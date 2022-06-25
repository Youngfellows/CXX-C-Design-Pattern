#ifndef CASH_SUPER_H
#define CASH_SUPER_H

/**
 * @brief 抽象类，收钱的纯虚函数  
 * 
 */
class CashSuper
{
    public:
       virtual ~CashSuper() = default;

       /**
        * @brief 纯虚函数,抽象接口: 收钱
        * 
        * @param money 收钱
        * @return double 返回的收钱数
        */
       virtual double acceptMoney(double money) = 0;
};
#endif