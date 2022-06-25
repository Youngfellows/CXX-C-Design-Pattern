#include "../include/CashRebate.h"

CashRebate::CashRebate(double dis)
{
    this->discount = dis;
}

double CashRebate::acceptMoney(double money)
{
    return money * discount;
}
