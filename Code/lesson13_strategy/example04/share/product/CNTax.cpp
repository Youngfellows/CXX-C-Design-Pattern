#include "../../include/product/CNTax.h"

double CNTax::calculate(std::unique_ptr<Taxpayer> taxpayer)
{
       cout << "CNTax::calculate():: 中国纳税人:" << taxpayer->getName() << ",收入:" << taxpayer->getRevenue() << endl;
       return taxpayer->getRevenue() * 0.01;
}