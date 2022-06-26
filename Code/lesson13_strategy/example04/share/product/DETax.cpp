#include "../../include/product/DETax.h"

double DETax::calculate(std::unique_ptr<Taxpayer> taxpayer)
{
       cout << "DETax::calculate():: 德国纳税人:" << taxpayer->getName() << ",收入:" << taxpayer->getRevenue() << endl;
       return taxpayer->getRevenue();
}