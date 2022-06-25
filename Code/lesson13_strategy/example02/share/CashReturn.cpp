#include "../include/CashReturn.h"

CashReturn::CashReturn(double condition,double mr)
{
    this->moneyCondition = condition;
    this->moneyReturn = mr;
}

/**
 * @brief 收钱，返款 
 * 
 * @param money  收钱
 * @return double 返款 
 */
double CashReturn::acceptMoney(double money)
{
    double result = money;  
    if(money >= moneyCondition)  
    {  
        result = money - floor(money / moneyCondition)*moneyReturn;  
    }  
    return result;  
}
