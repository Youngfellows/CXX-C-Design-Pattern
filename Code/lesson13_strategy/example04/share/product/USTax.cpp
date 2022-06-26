#include "../../include/product/USTax.h"

double USTax::calculate(std::unique_ptr<Taxpayer> taxpayer)
{
    cout << "USTax::calculate():: 美国纳税人:" << taxpayer->getName() << ",收入:" << taxpayer->getRevenue() << endl;
    return taxpayer->getRevenue();
}
