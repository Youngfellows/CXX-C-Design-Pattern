#include "../../include/structure/ShoppingCart.h"

ShoppingCart::ShoppingCart()
{
    cout << "ShoppingCart()构造函数" << endl;
    this->products = std::make_shared<std::list<std::shared_ptr<IProduct>>>();
}

ShoppingCart::~ShoppingCart()
{
    cout << "~ShoppingCart()析构函数" << endl;
    this->products->clear();
}

void ShoppingCart::addProduct(std::shared_ptr<IProduct> product)
{
    this->products->push_back(product);
}

void ShoppingCart::removeProduct(std::shared_ptr<IProduct> product)
{
    // this->products->erase(product);
    this->products->remove(product);
}

void ShoppingCart::accept(std::shared_ptr<IVisitor> visitor)
{
    for (auto iter = this->products->begin(); iter != this->products->end(); iter++)
    {
        (*iter)->accept(visitor);
    }
}