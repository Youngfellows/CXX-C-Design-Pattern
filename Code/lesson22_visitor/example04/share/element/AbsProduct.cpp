#include "../../include/element/AbsProduct.h"

AbsProduct::AbsProduct(std::string name, double price)
{
    this->name = name;
    this->price = price;
}

std::string AbsProduct::productName()
{
    return this->name;
}

double AbsProduct::productPrice()
{
    return this->price;
}