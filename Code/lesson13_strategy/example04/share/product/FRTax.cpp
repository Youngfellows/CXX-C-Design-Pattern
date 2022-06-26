#include "../../include/product/FRTax.h"

double FRTax::calculate(std::unique_ptr<Taxpayer> taxpayer)
{
       cout << "FRTax::calculate():: 法国纳税人:" << taxpayer->getName() << ",收入:" << taxpayer->getRevenue() << endl;
       return taxpayer->getRevenue() * 0.02;
}