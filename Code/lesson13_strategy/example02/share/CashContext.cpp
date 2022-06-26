#include "../include/CashContext.h"

CashContext::CashContext(string strategy)
{
        if(NORMAL.compare(strategy) == 0)
        {
            cashSuper = std::make_unique<CashNormal>();
        }else if(REBATE.compare(strategy) == 0)
        {
            cashSuper = std::make_unique<CashRebate>(0.9);//9折
        }else if(RETURN.compare(strategy) == 0) 
        {
            cashSuper = std::make_unique<CashReturn>(1000,200);//满1000返回200  
        }
}

CashContext::~CashContext()
{
    if(this->cashSuper != nullptr)
    {
        this->cashSuper = nullptr;
    }
}

double CashContext::getResult(double money)
{
    return this->cashSuper->acceptMoney(money);
}